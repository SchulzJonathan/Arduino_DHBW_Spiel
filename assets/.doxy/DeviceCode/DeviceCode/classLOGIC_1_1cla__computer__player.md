

# Class LOGIC::cla\_computer\_player



[**ClassList**](annotated.md) **>** [**LOGIC**](namespaceLOGIC.md) **>** [**cla\_computer\_player**](classLOGIC_1_1cla__computer__player.md)



_This class represents a computer opponent in the game. It provides methods for automatic movement of tokens. It is derived from the_ [_**cla\_player**_](classLOGIC_1_1cla__player.md) _._

* `#include <logic.hpp>`



Inherits the following classes: [LOGIC::cla\_player](classLOGIC_1_1cla__player.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
| virtual int8\_t | [**Auto\_Move**](#function-auto_move) (uint8\_t \_u8\_dice\_value, bool & \_bool\_occupied\_flag, uint8\_t & \_u8\_old\_position) override<br>_Automatic movement for a computer opponent._  |
| virtual bool | [**Is\_Computer**](#function-is_computer) () override const<br>_Checks if the player is a computer opponent._  |
|   | [**cla\_computer\_player**](#function-cla_computer_player) (uint8\_t \_u8\_player\_id, uint8\_t \_u8\_start\_position, uint8\_t \_u8\_computer\_quantity, [**cla\_session**](classLOGIC_1_1cla__session.md) \* \_obj\_my\_session, mode \_en\_mode) <br>_Constructor for the_ [_**cla\_computer\_player**_](classLOGIC_1_1cla__computer__player.md) _class._ |


## Public Functions inherited from LOGIC::cla_player

See [LOGIC::cla\_player](classLOGIC_1_1cla__player.md)

| Type | Name |
| ---: | :--- |
| virtual int8\_t | [**Auto\_Move**](#function-auto_move) (uint8\_t \_u8\_dice\_value, bool & \_bool\_occupied\_flag, uint8\_t & \_u8\_old\_position) <br> |
|  uint8\_t | [**Calculate\_Possible\_Position**](#function-calculate_possible_position) (uint8\_t \_u8\_token\_number, uint8\_t \_u8\_dice\_value) <br>_Calculates the possible position of a token._  |
|  uint8\_t | [**Get\_Player\_Progress**](#function-get_player_progress) () <br>_Returns the overall progress of the player (Value between 1-28)._  |
|  status | [**Get\_Player\_Status**](#function-get_player_status) () <br>_Outputs the status of player._  |
|  uint8\_t | [**Get\_Start\_Position**](#function-get_start_position) () <br>_Returns the starting position of the player._  |
|  uint8\_t | [**Get\_Token\_Position**](#function-get_token_position) (uint8\_t \_u8\_token\_number) <br>_Returns the current position of a token._  |
|  uint8\_t | [**Get\_Token\_Progress**](#function-get_token_progress) (uint8\_t \_u8\_token\_number) <br>_Returns the progress of a token on the track._  |
| virtual bool | [**Is\_Computer**](#function-is_computer) () const = 0<br>_Checks if the player is a computer opponent._  |
|  int8\_t | [**Is\_Start\_Field\_Occupied\_By\_Own\_Token**](#function-is_start_field_occupied_by_own_token) () <br>_Checks if the starting square is occupied by own token while other tokens are home._  |
|  uint8\_t | [**Move\_Token**](#function-move_token) (uint8\_t \_u8\_token\_number, uint8\_t \_u8\_dice\_value) <br>_Moves a token on the track._  |
|  uint8\_t | [**Set\_Token\_Position**](#function-set_token_position) (uint8\_t \_u8\_token\_number, uint8\_t \_u8\_new\_position) <br>_Changes the position of a token._  |
|   | [**cla\_player**](#function-cla_player) (uint8\_t \_u8\_player\_id, uint8\_t \_u8\_start\_position, uint8\_t \_u8\_computer\_quantity, [**cla\_session**](classLOGIC_1_1cla__session.md) \* \_obj\_my\_session) <br>_Constructor for the_ [_**cla\_player**_](classLOGIC_1_1cla__player.md) _class._ |














## Protected Attributes

| Type | Name |
| ---: | :--- |
|  mode | [**en\_mode**](#variable-en_mode)  <br>_The mode of the computer opponent._  |


## Protected Attributes inherited from LOGIC::cla_player

See [LOGIC::cla\_player](classLOGIC_1_1cla__player.md)

| Type | Name |
| ---: | :--- |
|  [**cla\_session**](classLOGIC_1_1cla__session.md) \* | [**obj\_my\_session**](#variable-obj_my_session)  <br>_Pointer to the associated session._  |
|  uint8\_t | [**u8\_player\_id**](#variable-u8_player_id)  <br>_The id of the player._  |
|  uint8\_t | [**u8\_start\_position**](#variable-u8_start_position)  <br>_The starting position of the player._  |
|  uint8\_t | [**u8\_token\_position**](#variable-u8_token_position)  <br>_The positions of the player's four tokens._  |






































## Public Functions Documentation




### function Auto\_Move 

_Automatic movement for a computer opponent._ 
```C++
virtual int8_t LOGIC::cla_computer_player::Auto_Move (
    uint8_t _u8_dice_value,
    bool & _bool_occupied_flag,
    uint8_t & _u8_old_position
) override
```





**Parameters:**


* `_u8_dice_value` The value of the rolled dice. 
* `&_bool_occupied_flag` Reference to a variable to store the occupied flag. 
* `&_u8_old_position` Reference to a variable to store the old position. 



**Returns:**

The token that was automatically moved. 





        
Implements [*LOGIC::cla\_player::Auto\_Move*](classLOGIC_1_1cla__player.md#function-auto_move)




### function Is\_Computer 

_Checks if the player is a computer opponent._ 
```C++
inline virtual bool LOGIC::cla_computer_player::Is_Computer () override const
```





**Returns:**

true if the player is a computer opponent, false otherwise. 





        
Implements [*LOGIC::cla\_player::Is\_Computer*](classLOGIC_1_1cla__player.md#function-is_computer)




### function cla\_computer\_player 

_Constructor for the_ [_**cla\_computer\_player**_](classLOGIC_1_1cla__computer__player.md) _class._
```C++
LOGIC::cla_computer_player::cla_computer_player (
    uint8_t _u8_player_id,
    uint8_t _u8_start_position,
    uint8_t _u8_computer_quantity,
    cla_session * _obj_my_session,
    mode _en_mode
) 
```





**Parameters:**


* `_u8_player_id` The ID of the player. 
* `_u8_start_position` The individual starting position of the player. 
* `_u8_computer_quantity` The number of computer controlled players. 
* `_u8_mode` The mode of the computer opponent. 




        
## Protected Attributes Documentation




### variable en\_mode 

```C++
mode LOGIC::cla_computer_player::en_mode;
```




------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/logic.hpp`

