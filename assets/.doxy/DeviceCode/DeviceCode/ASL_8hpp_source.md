

# File ASL.hpp

[**File List**](files.md) **>** [**ASL**](dir_9d6c7046ff27a423104698a469533c50.md) **>** [**ASL.hpp**](ASL_8hpp.md)

[Go to the documentation of this file](ASL_8hpp.md)

```C++


#ifndef ASL_HPP
#define ASL_HPP

#include <../../include/defines.hpp>
#include <RGBmatrixPanel.h> // Hardware-specific library#
#include <inttypes.h>
namespace ASL {

typedef enum {
  display_setup_real_players = 0,
  setup_real_players,                 // 1   0001
  modify_real_player_number,          // 2   0010
  display_setup_computer_players,     // 3   0011
  setup_computer_players,             // 4   0100
  modify_computer_player_number,      // 5   0101
  display_setup_computer_player_mode, // 6   0110
  setup_computer_player_mode,         // 7   0111
  modify_computer_player_mode,        // 8   1000
  init_game_logic,                    // 9   1001
  wait_for_dice_roll,                 // 10  1010
  roll_the_dice,                      // 11  1011
  wait_for_player_input,              // 12  1100
  display_token,                      // 13  1101
  validate_token,                     // 14  1110
  move_token,                         // 15  1111
  next_player,                        // 16 10000
  game_finished                       // 17 10001
} en_state;

typedef enum { off = 0, fast, slow } en_blink_mode;

typedef enum {
  token = 0,
  token_thrown,
  starting_square,
  winner_animation
} en_blink_type;

class cla_display {
  uint8_t u8_matrix_a;   
  uint8_t u8_matrix_b;   
  uint8_t u8_matrix_c;   
  uint8_t u8_matrix_clk; 
  uint8_t u8_matrix_lat; 
  uint8_t u8_matrix_oe;  
#if TIMING_DEBUG_INTERN != 0
public:
#endif
  RGBmatrixPanel *obj_matrix;

#if TIMING_DEBUG_INTERN != 0
private:
#endif

  uint8_t u8_track_positions[40][3] = {
      {5, 2, 6},   {6, 3, 6},   {7, 4, 6},   {8, 5, 6},   {9, 6, 6},
      {10, 6, 5},  {11, 6, 4},  {12, 6, 3},  {13, 6, 2},  {14, 7, 2},
      {15, 8, 2},  {16, 8, 3},  {17, 8, 4},  {18, 8, 5},  {19, 8, 6},
      {20, 9, 6},  {21, 10, 6}, {22, 11, 6}, {23, 12, 6}, {24, 12, 7},
      {25, 12, 8}, {26, 11, 8}, {27, 10, 8}, {28, 9, 8},  {29, 8, 8},
      {30, 8, 9},  {31, 8, 10}, {32, 8, 11}, {33, 8, 12}, {34, 7, 12},
      {35, 6, 12}, {36, 6, 11}, {37, 6, 10}, {38, 6, 9},  {39, 6, 8},
      {40, 5, 8},  {41, 4, 8},  {42, 3, 8},  {43, 2, 8},  {44, 2, 7},
  };

  uint8_t u8_home_positions[4][4][2] = {
      {{2, 2}, {2, 3}, {3, 2}, {3, 3}},
      {{11, 2}, {11, 3}, {12, 2}, {12, 3}},
      {{11, 11}, {11, 12}, {12, 11}, {12, 12}},
      {{2, 11}, {2, 12}, {3, 11}, {3, 12}},
  };

  uint8_t u8_finish_positions[4][4][2] = {
      {{3, 7}, {4, 7}, {5, 7}, {6, 7}},
      {{7, 3}, {7, 4}, {7, 5}, {7, 6}},
      {{11, 7}, {10, 7}, {9, 7}, {8, 7}},
      {{7, 11}, {7, 10}, {7, 9}, {7, 8}},
  };

  uint8_t u8_smiley_postitions[26][2] = {
      {0, 2}, {0, 3}, {0, 4}, {0, 5}, {1, 1}, {1, 6}, {2, 0}, {2, 2}, {2, 4},
      {2, 7}, {3, 0}, {3, 5}, {3, 7}, {4, 0}, {4, 5}, {4, 7}, {5, 0}, {5, 2},
      {5, 4}, {5, 7}, {6, 1}, {6, 6}, {7, 2}, {7, 3}, {7, 4}, {7, 5}};

  uint16_t u16_player_color[4][2] = {
      {0xf800, 0x1000},
      {0x07e0, 0x00a0},
      {0xffe0, 0x10a0},
      {0x001f, 0x0002},
  };

  uint16_t u16_track_color = WHITE_BRIGHT;

  // --- variables for the blink function ---
  en_blink_mode en_current_blink_mode = off;
  int8_t i8_blink_counter = 0;
  en_blink_type en_current_blink_type = token;
  uint8_t u8_blink_player_number = 0;
  int8_t i8_blink_second_player = -1;
  uint8_t u8_blink_old_position = 0;
  uint8_t u8_blink_new_position = 0;
  uint8_t u8_blink_state = 0;

public:
  cla_display(uint8_t _u8_matrix_a, uint8_t u8_matrix_b, uint8_t u8_matrix_c,
              uint8_t u8_matrix_clk, uint8_t u8_lat, uint8_t u8_matrix_oe);

  void Set_Colors(uint8_t _u8_player_nr, uint16_t _u16_bright_color,
                  uint16_t _u16_dark_color);

  void Begin();

  void Display_Track();

  void Display_Players(uint8_t _u8_player_quantity,
                       bool _bool_tokens_at_home = true);

  void Display_Restore();

  void Display_Current_Player(int8_t _i8_current_player_number,
                              int8_t _i8_tokens_at_home = -1);

  void Display_Progress(int8_t _i8_current_player_number, uint8_t _u8_progress);

  void Display_Char(char _ch_first_letter = ' ', char _ch_second_letter = ' ',
                    char _ch_third_letter = ' ');

  void Display_Clear_Right();

  void Blink_Start(en_blink_mode _en_blink_mode, int8_t _i8_blink_cycles,
                   en_blink_type _en_blink_type,
                   uint8_t _u8_blink_player_number,
                   int8_t _i8_blink_second_player, uint8_t _u8_new_position = 0,
                   bool _bool_occupied_flag = true,
                   uint8_t _u8_old_position = 0);
  bool Blink_Update(bool _bool_isr_active);

  void Blink_Stop();

  bool Blink_Is_On();

  void Modify_Position(uint8_t _u8_position, uint8_t _u8_player_number,
                       bool bool_remove);

  void Move_Token(uint8_t _u8_player_nr, uint8_t _u8_remove_position,
                  uint8_t _u8_add_position);

  void Display_Dice(uint8_t _u8_dice_value, uint8_t _u8_dice_roll_counter,
                    int8_t _i8_current_player_number,
                    bool _bool_animate = true);
};

void Setup_Buttons();

void Setup_Dice();

uint8_t Roll_Dice();

void Delay_256(uint16_t _u16_delay);

} // namespace ASL

#endif

```

