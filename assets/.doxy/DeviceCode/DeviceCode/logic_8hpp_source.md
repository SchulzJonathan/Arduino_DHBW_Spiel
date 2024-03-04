

# File logic.hpp

[**File List**](files.md) **>** [**COD\_ENG\_OUT\_arduino\_code**](dir_e46236678326602fb51a33a9a20e1fb4.md) **>** [**lib**](dir_4020720c6a555fbd5bcbb296f9427588.md) **>** [**Game\_Logic**](dir_a4eb90df38054bf38c8301b489299593.md) **>** [**logic.hpp**](logic_8hpp.md)

[Go to the documentation of this file](logic_8hpp.md)

```C++


#ifndef LOGIC_HPP
#define LOGIC_HPP

#ifndef __AVR__ // For arduino
#include <cstdint>
#else
#include <Arduino.h>
#endif

namespace LOGIC {

// Forward declaration of cla_player
class cla_player;

typedef enum {
  Start = 0,
  Start_Track,
  Start_Finished,
  Start_Track_Finished,
  Error,
  Track,
  Finished,
  Track_Finished,
} status;

typedef enum {
  Student = 0,
  Professor = 1,
} mode;

class cla_session {
public:
  cla_session(uint8_t _u8_player_quantity, uint8_t _u8_computer_quantity,
              mode _en_mode);

  cla_player *array_players[4]; 

  bool Is_Occupied(uint8_t &_u8_is_occupied_player_id,
                   uint8_t &_u8_is_occupied_token_number,
                   uint8_t _u8_affected_track_position);

  bool Return_Home(uint8_t _u8_affected_track_position);

  uint8_t Get_Player_Quantity(); 

  uint8_t Get_Computer_Quantity(); 

  uint8_t u8_is_occupied_player_id;    
  uint8_t u8_is_occupied_token_number; 
private:
  uint8_t u8_player_quantity;   
  uint8_t u8_computer_quantity; 
};

class cla_player {
public:
  cla_player(uint8_t _u8_player_id, uint8_t _u8_start_position,
             uint8_t _u8_computer_quantity, cla_session *_obj_my_session);

  uint8_t Calculate_Possible_Position(uint8_t _u8_token_number,
                                      uint8_t _u8_dice_value);

  uint8_t Move_Token(uint8_t _u8_token_number, uint8_t _u8_dice_value);

  int8_t Is_Start_Field_Occupied_By_Own_Token();

  uint8_t Get_Token_Position(uint8_t _u8_token_number);

  uint8_t Set_Token_Position(uint8_t _u8_token_number,
                             uint8_t _u8_new_position);

  uint8_t Get_Token_Progress(uint8_t _u8_token_number);

  status Get_Player_Status();

  uint8_t Get_Player_Progress();

  virtual bool Is_Computer() const = 0;

  uint8_t
  Get_Start_Position(); 

  virtual int8_t Auto_Move(uint8_t _u8_dice_value, bool &_bool_occupied_flag,
                           uint8_t &_u8_old_position);

protected:
  uint8_t u8_start_position;    
  uint8_t u8_token_position[4]; 
  uint8_t u8_player_id;         
  cla_session *obj_my_session;  
};

class cla_computer_player : public cla_player {
public:
  cla_computer_player(uint8_t _u8_player_id, uint8_t _u8_start_position,
                      uint8_t _u8_computer_quantity,
                      cla_session *_obj_my_session, mode _en_mode);

  int8_t Auto_Move(uint8_t _u8_dice_value, bool &_bool_occupied_flag,
                   uint8_t &_u8_old_position) override;

  virtual bool Is_Computer() const override { return true; }

protected:
  mode en_mode; 
};

class cla_manual_player : public cla_player {
public:
  cla_manual_player(uint8_t _u8_player_id, uint8_t _u8_start_position,
                    uint8_t _u8_computer_quantity,
                    cla_session *_obj_my_session);
  virtual bool Is_Computer() const override { return false; }
};

} // namespace LOGIC

#endif // LOGIC_HPP

```

