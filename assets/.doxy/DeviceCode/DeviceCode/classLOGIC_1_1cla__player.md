

# Class LOGIC::cla\_player



[**ClassList**](annotated.md) **>** [**LOGIC**](namespaceLOGIC.md) **>** [**cla\_player**](classLOGIC_1_1cla__player.md)



_This class represents a player in the game. It provides methods for moving tokens and checking the status of the player. It is an abstract class and has two derived classes:_ [_**cla\_computer\_player**_](classLOGIC_1_1cla__computer__player.md) _and_[_**cla\_manual\_player**_](classLOGIC_1_1cla__manual__player.md) _._

* `#include <logic.hpp>`





Inherited by the following classes: [LOGIC::cla\_computer\_player](classLOGIC_1_1cla__computer__player.md),  [LOGIC::cla\_manual\_player](classLOGIC_1_1cla__manual__player.md)
































## Public Functions

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
|  [**cla\_session**](classLOGIC_1_1cla__session.md) \* | [**obj\_my\_session**](#variable-obj_my_session)  <br>_Pointer to the associated session._  |
|  uint8\_t | [**u8\_player\_id**](#variable-u8_player_id)  <br>_The id of the player._  |
|  uint8\_t | [**u8\_start\_position**](#variable-u8_start_position)  <br>_The starting position of the player._  |
|  uint8\_t | [**u8\_token\_position**](#variable-u8_token_position)  <br>_The positions of the player's four tokens._  |




















## Public Functions Documentation




### function Auto\_Move 

```C++
virtual int8_t LOGIC::cla_player::Auto_Move (
    uint8_t _u8_dice_value,
    bool & _bool_occupied_flag,
    uint8_t & _u8_old_position
) 
```






### function Calculate\_Possible\_Position 

_Calculates the possible position of a token._ 
```C++
uint8_t LOGIC::cla_player::Calculate_Possible_Position (
    uint8_t _u8_token_number,
    uint8_t _u8_dice_value
) 
```





**Parameters:**


* `_u8_token_number` The token number. 
* `_u8_dice_value` The value of the rolled dice. 



**Returns:**

The calculated position of the token. 





        



### function Get\_Player\_Progress 

_Returns the overall progress of the player (Value between 1-28)._ 
```C++
uint8_t LOGIC::cla_player::Get_Player_Progress () 
```





**Returns:**

The overall progress of the player on the track. 





        



### function Get\_Player\_Status 

_Outputs the status of player._ 
```C++
status LOGIC::cla_player::Get_Player_Status () 
```





**Returns:**

The status of the player. 





        



### function Get\_Start\_Position 

```C++
uint8_t LOGIC::cla_player::Get_Start_Position () 
```






### function Get\_Token\_Position 

_Returns the current position of a token._ 
```C++
uint8_t LOGIC::cla_player::Get_Token_Position (
    uint8_t _u8_token_number
) 
```





**Parameters:**


* `_u8_token_number` The token number. 



**Returns:**

The current position of the token. 





        



### function Get\_Token\_Progress 

_Returns the progress of a token on the track._ 
```C++
uint8_t LOGIC::cla_player::Get_Token_Progress (
    uint8_t _u8_token_number
) 
```





**Parameters:**


* `_u8_token_number` The token number. 



**Returns:**

The progress of the token on the track. 





        



### function Is\_Computer 

_Checks if the player is a computer opponent._ 
```C++
virtual bool LOGIC::cla_player::Is_Computer () const = 0
```





**Returns:**

true if the player is a computer opponent, false otherwise. 





        



### function Is\_Start\_Field\_Occupied\_By\_Own\_Token 

_Checks if the starting square is occupied by own token while other tokens are home._ 
```C++
int8_t LOGIC::cla_player::Is_Start_Field_Occupied_By_Own_Token () 
```





**Returns:**

The token number that must be moved 





        



### function Move\_Token 

_Moves a token on the track._ 
```C++
uint8_t LOGIC::cla_player::Move_Token (
    uint8_t _u8_token_number,
    uint8_t _u8_dice_value
) 
```





**Parameters:**


* `_u8_token_number` The token number. 
* `_u8_dice_value` The value of the rolled dice. 



**Returns:**

The new position of the token. 





        



### function Set\_Token\_Position 

_Changes the position of a token._ 
```C++
uint8_t LOGIC::cla_player::Set_Token_Position (
    uint8_t _u8_token_number,
    uint8_t _u8_new_position
) 
```





**Parameters:**


* `_u8_token_number` The token number. 
* `_u8_new_position` The new position of the token. 



**Returns:**

The new position of the token. 





        



### function cla\_player 

_Constructor for the_ [_**cla\_player**_](classLOGIC_1_1cla__player.md) _class._
```C++
LOGIC::cla_player::cla_player (
    uint8_t _u8_player_id,
    uint8_t _u8_start_position,
    uint8_t _u8_computer_quantity,
    cla_session * _obj_my_session
) 
```





**Parameters:**


* `_u8_player_id` The ID of the player. 
* `_u8_start_position` The individual starting position of the player. 
* `_u8_computer_quantity` The number of computer controlled players. 
* `_obj_my_session` Pointer to the associated session. 




        
## Protected Attributes Documentation




### variable obj\_my\_session 

```C++
cla_session* LOGIC::cla_player::obj_my_session;
```






### variable u8\_player\_id 

```C++
uint8_t LOGIC::cla_player::u8_player_id;
```






### variable u8\_start\_position 

```C++
uint8_t LOGIC::cla_player::u8_start_position;
```






### variable u8\_token\_position 

```C++
uint8_t LOGIC::cla_player::u8_token_position[4];
```




------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/logic.hpp`

