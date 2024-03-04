

# File interupt.cpp

[**File List**](files.md) **>** [**COD\_ENG\_OUT\_arduino\_code**](dir_e46236678326602fb51a33a9a20e1fb4.md) **>** [**src**](dir_38410eb1dec6281e0e0807d9e6ad57cf.md) **>** [**interupt.cpp**](interupt_8cpp.md)

[Go to the documentation of this file](interupt_8cpp.md)

```C++


#include <ASL.hpp>
#include <Arduino.h>
#include <logic.hpp>

extern volatile ASL::en_state en_current_state;
extern uint8_t u8_player_quantity;
extern uint8_t u8_computer_quantity;
extern volatile int8_t i8_current_token_number;
extern ASL::cla_display obj_display;
extern volatile bool bool_blink_flag;

#if TIMING_DEBUG_INTERN != 0
extern uint8_t u8_timing_debug_array[101];
extern uint8_t u8_timing_debug_counter;
#endif

ISR(INT4_vect) {
  // Disable INT4:
  EIMSK &= 0b11101111;

#if TIMING_DEBUG
  PORTK |= 0b00000001;
#endif
#if TIMING_DEBUG_INTERN == 1
  TCNT2 = 0x00;
#endif

  switch (en_current_state) {
  case ASL::display_setup_real_players:
    // NOP
    break;
  case ASL::setup_real_players:
    en_current_state = ASL::modify_real_player_number;
    break;
  case ASL::modify_real_player_number:
    // NOP
    break;
  case ASL::display_setup_computer_players:
    // NOP
    break;
  case ASL::setup_computer_players:
    en_current_state = ASL::modify_computer_player_number;
    break;
  case ASL::modify_computer_player_number:
    // NOP
    break;
  case ASL::display_setup_computer_player_mode:
    // NOP
    break;
  case ASL::setup_computer_player_mode:
    en_current_state = ASL::modify_computer_player_mode;
    break;
  case ASL::modify_computer_player_mode:
    // NOP
    break;
  case ASL::init_game_logic:
    // NOP
    break;
  case ASL::wait_for_dice_roll:
    en_current_state = ASL::roll_the_dice;
    break;
  case ASL::roll_the_dice:
    // NOP
    break;
  case ASL::wait_for_player_input:
    en_current_state = ASL::validate_token;
    break;
  case ASL::display_token:
    // NOP
    break;
  case ASL::validate_token:
    // NOP
    break;
  case ASL::move_token:
    // NOP
    break;
  case ASL::next_player:
    // NOP
    break;
  case ASL::game_finished:
    en_current_state = ASL::display_setup_real_players;
    break;
  default:
    // An error occured, go back to setup.
    en_current_state = ASL::display_setup_real_players;
    break;
  }

  // Reset the timer. Interupts must be disabled during this task, because it is
  // a 16 BIT Timer.
  cli();
  TCNT3 = 0x0000;
  sei();
  // clear Interupt Flag Register for Output compare A
  TIFR3 = 1 << OCF3A;

#if TIMING_DEBUG
  PORTK &= 0b11111110;
#endif
#if TIMING_DEBUG_INTERN == 1
  // write TCNT2 value to array
  u8_timing_debug_array[u8_timing_debug_counter] = TCNT2;
  // write next value to next array position
  u8_timing_debug_counter++;
#endif

  // Enable Timer interupt
  TIMSK3 |= 1 << OCIE3A;
}

ISR(INT5_vect) {
  // Disable INT5:
  EIMSK &= 0b11011111;

#if TIMING_DEBUG
  PORTK |= 0b00000010;
#endif
#if TIMING_DEBUG_INTERN == 2
  TCNT2 = 0x00;
#endif

  switch (en_current_state) {
  case ASL::display_setup_real_players:
    // NOP
    break;
  case ASL::setup_real_players:
    if (u8_player_quantity != 4) {
      en_current_state = ASL::display_setup_computer_players;
    } else {
      en_current_state = ASL::init_game_logic;
    }
    break;
  case ASL::modify_real_player_number:
    // NOP
    break;
  case ASL::display_setup_computer_players:
    // NOP
    break;
  case ASL::setup_computer_players:
    if (u8_computer_quantity != 0) {
      en_current_state = ASL::display_setup_computer_player_mode;
    } else {
      en_current_state = ASL::init_game_logic;
    }
    break;
  case ASL::modify_computer_player_number:
    // NOP
    break;
  case ASL::display_setup_computer_player_mode:
    // NOP
    break;
  case ASL::setup_computer_player_mode:
    en_current_state = ASL::init_game_logic;
    break;
  case ASL::modify_computer_player_mode:
    // NOP
    break;
  case ASL::init_game_logic:
    // NOP
    break;
  case ASL::wait_for_dice_roll:
    // NOP
    break;
  case ASL::roll_the_dice:
    // NOP
    break;
  case ASL::wait_for_player_input:
    en_current_state = ASL::move_token;
    break;
  case ASL::display_token:
    // NOP
    break;
  case ASL::validate_token:
    // NOP
    break;
  case ASL::move_token:
    // NOP
    break;
  case ASL::next_player:
    // NOP
    break;
  case ASL::game_finished:
    en_current_state = ASL::display_setup_real_players;
    break;
  default:
    // An error occured, go back to setup.
    en_current_state = ASL::display_setup_real_players;
    break;
  }

  // Reset the timer. Interupts must be disabled during this task, because it is
  // a 16 BIT Timer.
  cli();
  TCNT3 = 0x0000;
  sei();
  // clear Interupt Flag Register for Output compare A
  TIFR3 = 1 << OCF3A;

#if TIMING_DEBUG
  PORTK &= 0b11111101;
#endif
#if TIMING_DEBUG_INTERN == 2
  // write TCNT2 value to array
  u8_timing_debug_array[u8_timing_debug_counter] = TCNT2;
  // write next value to next array position
  u8_timing_debug_counter++;
#endif

  // Enable Timer interupt
  TIMSK3 |= 1 << OCIE3A;
}

ISR(TIMER3_COMPA_vect) {
#if TIMING_DEBUG
  PORTK |= 0b00000100;
#endif
#if TIMING_DEBUG_INTERN == 3
  TCNT2 = 0x00;
#endif

  // Disable Timer Interupt:
  TIMSK3 &= ~(1 << OCIE3A);
  // Enable INT4 and INT5:
  EIMSK |= 0b00110000;
  // Reset Interupt Flags:
  EIFR |= 0b00110000;

#if TIMING_DEBUG
  PORTK &= 0b11111011;
#endif
#if TIMING_DEBUG_INTERN == 3
  // write TCNT2 value to array
  u8_timing_debug_array[u8_timing_debug_counter] = TCNT2;
  // write next value to next array position
  u8_timing_debug_counter++;
#endif
}

ISR(TIMER4_COMPA_vect) {
#if TIMING_DEBUG
  PORTK |= 0b00001000;
#endif
#if TIMING_DEBUG_INTERN == 4
  TCNT2 = 0x00;
#endif

  bool_blink_flag = obj_display.Blink_Update(true);

#if TIMING_DEBUG
  PORTK &= 0b11110111;
#endif
#if TIMING_DEBUG_INTERN == 4
  // write TCNT2 value to array
  u8_timing_debug_array[u8_timing_debug_counter] = TCNT2;
  // write next value to next array position
  u8_timing_debug_counter++;
#endif
}

ISR(TIMER5_COMPA_vect) {
#if TIMING_DEBUG
  PORTK |= 0b00010000;
#endif
#if TIMING_DEBUG_INTERN == 5
  TCNT2 = 0x00;
#endif

  // Disable Timer Interupt:
  TIMSK5 &= ~(1 << OCIE5A);

#if TIMING_DEBUG
  PORTK &= 0b11101111;
#endif
#if TIMING_DEBUG_INTERN == 5
  // write TCNT2 value to array
  u8_timing_debug_array[u8_timing_debug_counter] = TCNT2;
  // write next value to next array position
  u8_timing_debug_counter++;
#endif
}

```

