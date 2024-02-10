#include <ASL.hpp>
#include <Arduino.h>
#include <logic.hpp>

// Define all the Ports here:
#define CLK 11 // MUST be on PORTB! (Use pin 11 on Mega)
#define LAT A3
#define OE 12
#define A A0
#define B A1
#define C A2

// define all the colors
#define RED_BRIGHT 0xf800
#define RED_DARK 0x1000
#define GREEN_BRIGHT 0x7e0
#define GREEN_DARK 0xa0
#define YELLOW_BRIGHT 0xffe0
#define YELLOW_DARK 0x10a0
#define BLUE_BRIGHT 0x001f
#define BLUE_DARK 0x0002
#define WHITE_BRIGHT 0xffff

#define DEBUG true

volatile ASL::en_state en_current_state = ASL::setup_real_players;
uint8_t u8_player_quantity = 1;
uint8_t u8_computer_quantity = 0;
volatile uint8_t u8_current_player_number = 0;
volatile uint8_t u8_current_token_number = 0;
uint8_t u8_dice_value = 0;
uint8_t u8_dice_roll_counter = 0;
LOGIC::cla_session *obj_session;
ASL::cla_display obj_display(A, B, C, CLK, LAT, OE);

void setup() {
  obj_display.Set_Colors(0, RED_BRIGHT, RED_DARK);
  obj_display.Set_Colors(1, BLUE_BRIGHT, BLUE_DARK);
  obj_display.Set_Colors(2, YELLOW_BRIGHT, YELLOW_DARK);
  obj_display.Set_Colors(3, GREEN_BRIGHT, GREEN_DARK);
  obj_display.Begin();
  ASL::Setup_Buttons();
  ASL::Setup_Dice();
#if DEBUG
  // Set Port K to Output
  DDRK = 0xff;
#endif
}

void loop() {
  uint8_t u8_old_position;
  uint8_t u8_new_position;
  switch (en_current_state) {
  case ASL::setup_real_players:
    obj_display.Display_Players(u8_player_quantity);
    break;
  case ASL::modify_real_player_number:
    if (u8_player_quantity < 4) {
      u8_player_quantity++;
    } else {
      u8_player_quantity = 1;
    }
#if DEBUG
    // First 4 Bits are for the current state, two for the player quantity and
    // two for computer quantity
    PORTK = en_current_state | ((u8_player_quantity - 1) << 4) |
            (u8_computer_quantity << 6);
#endif
    en_current_state = ASL::setup_real_players;
    break;
  case ASL::setup_computer_players:
    obj_display.Display_Players(u8_player_quantity);
    break;
  case ASL::modify_computer_player_number:
    if (u8_player_quantity < 4) {
      u8_player_quantity++;
      u8_computer_quantity++;
    } else {
      u8_player_quantity = u8_player_quantity - u8_computer_quantity;
      u8_computer_quantity = 0;
    }
#if DEBUG
    // First 4 Bits are for the current state, two for the player quantity and
    // two for computer quantity
    PORTK = en_current_state | ((u8_player_quantity - 1) << 4) |
            (u8_computer_quantity << 6);
#endif
    en_current_state = ASL::setup_computer_players;
    break;
  case ASL::init_game_logic:
    obj_session =
        new LOGIC::cla_session(u8_player_quantity, u8_computer_quantity);
#if DEBUG
    // First 4 Bits are for the current state, two for the player quantity and
    // two for computer quantity
    PORTK = en_current_state | ((u8_player_quantity - 1) << 4) |
            (u8_computer_quantity << 6);
#endif
    obj_display.Display_Current_Player(u8_current_player_number);
    en_current_state = ASL::wait_for_dice_roll;
    break;
  case ASL::wait_for_dice_roll:
    // NOP
    break;
  case ASL::roll_the_dice:
    u8_dice_value = ASL::Roll_Dice();
    u8_dice_roll_counter++;
    obj_display.Display_Dice(u8_dice_value, u8_dice_roll_counter,
                             u8_current_player_number);
    // You can roll the dice up to 3 times, when all your tokens are still in
    // the Starting Square and you did not get a 6.
    if (obj_session->array_players[u8_current_player_number]
                ->Get_Player_Status() == LOGIC::Start &&
        u8_dice_roll_counter < 3 && u8_dice_value != 6) {
      // one more chance for the same player
      en_current_state = ASL::wait_for_dice_roll;
    } else if (obj_session->array_players[u8_current_player_number]
                       ->Get_Player_Status() == LOGIC::Start &&
               u8_dice_roll_counter >= 3 && u8_dice_value != 6) {
      // If you did not get a 6 after 3 tries, the next player gets a chance.
      // Reset the dice roll counter
      u8_dice_roll_counter = 0;
      // wait for next player to roll dice
      en_current_state = ASL::next_player;
    } else {
      // If you got a 6, your token is moved out of the Starting Square
      en_current_state = ASL::validate_token;
      u8_dice_roll_counter = 0;
    }
#if DEBUG
    PORTK = en_current_state | (u8_current_player_number << 4) |
            (u8_current_token_number << 6);
#endif
    break;
  case ASL::wait_for_player_input:
    // NOP
    break;
  case ASL::display_token:

    obj_display.Blink_Stop();
    u8_old_position = obj_session->array_players[u8_current_player_number]
                          ->Get_Token_Position(u8_current_token_number);
    u8_new_position = obj_session->array_players[u8_current_player_number]
                          ->Calculate_Possible_Position(u8_current_token_number,
                                                        u8_dice_value);
    obj_display.Blink_Start(ASL::slow, -1, u8_current_player_number,
                            u8_old_position, u8_new_position);
#if DEBUG
    PORTK = en_current_state | (u8_current_player_number << 4) |
            (u8_current_token_number << 6);
#endif
    en_current_state = ASL::wait_for_player_input;
    break;
  case ASL::validate_token: {
#if DEBUG
    PORTK = en_current_state | (u8_current_player_number << 4) |
            (u8_current_token_number << 6);
#endif
    en_current_state = ASL::wait_for_player_input;
    // variable used to determine if any token can be moved
    uint8_t u8_token_counter = 0;
    while (obj_session->array_players[u8_current_player_number]
               ->Calculate_Possible_Position(u8_current_token_number,
                                             u8_dice_value) ==
           obj_session->array_players[u8_current_player_number]
               ->Get_Token_Position(u8_current_token_number)) {
      // If there is no possible move, next token is chosen
      if (u8_current_token_number < 4) {
        u8_current_token_number++;
      } else {
        u8_current_token_number = 0;
      }
      u8_token_counter++;
      if (u8_token_counter > 4) {
        // If no token can be moved, next player is chosen
        en_current_state = ASL::next_player;
        break;
      }
    }
  }
    en_current_state = ASL::display_token;
    break;
  case ASL::move_token:
    obj_display.Blink_Stop();
    u8_old_position = obj_session->array_players[u8_current_player_number]
                          ->Get_Token_Position(u8_current_token_number);
    u8_new_position = obj_session->array_players[u8_current_player_number]
                          ->Calculate_Possible_Position(u8_current_token_number,
                                                        u8_dice_value);
    obj_session->array_players[u8_current_player_number]->Move_Token(
        u8_current_token_number, u8_dice_value);
    obj_display.Move_Token(u8_current_player_number, u8_current_token_number,
                           u8_old_position, u8_new_position);
    en_current_state = ASL::next_player;
    break;
  case ASL::next_player:
    if (u8_current_player_number < (u8_player_quantity - 1)) {
      u8_current_player_number++;
    } else {
      u8_current_player_number = 0;
    }
    obj_display.Display_Current_Player(u8_current_player_number);
#if DEBUG
    PORTK = en_current_state | (u8_current_player_number << 4) |
            (u8_current_token_number << 6);
#endif
    en_current_state = ASL::wait_for_dice_roll;
    break;
  case ASL::game_finished:

    break;
  default:
    // An error occured, go back to setup.
    en_current_state = ASL::setup_real_players;
    break;
  }
}
