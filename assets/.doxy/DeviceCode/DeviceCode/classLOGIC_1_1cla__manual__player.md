

# Class LOGIC::cla\_manual\_player



[**ClassList**](annotated.md) **>** [**LOGIC**](namespaceLOGIC.md) **>** [**cla\_manual\_player**](classLOGIC_1_1cla__manual__player.md)



_This class represents a manual player in a game. It is derived from the_ [_**cla\_player**_](classLOGIC_1_1cla__player.md) _class._

* `#include <logic.hpp>`



Inherits the following classes: [LOGIC::cla\_player](classLOGIC_1_1cla__player.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
| virtual bool | [**Is\_Computer**](#function-is_computer) () override const<br>_Checks if the player is a computer opponent._  |
|   | [**cla\_manual\_player**](#function-cla_manual_player) (uint8\_t \_u8\_player\_id, uint8\_t \_u8\_start\_position, uint8\_t \_u8\_computer\_quantity, [**cla\_session**](classLOGIC_1_1cla__session.md) \* \_obj\_my\_session) <br>_Constructor for the_ [_**cla\_manual\_player**_](classLOGIC_1_1cla__manual__player.md) _class._ |


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
















## Protected Attributes inherited from LOGIC::cla_player

See [LOGIC::cla\_player](classLOGIC_1_1cla__player.md)

| Type | Name |
| ---: | :--- |
|  [**cla\_session**](classLOGIC_1_1cla__session.md) \* | [**obj\_my\_session**](#variable-obj_my_session)  <br>_Pointer to the associated session._  |
|  uint8\_t | [**u8\_player\_id**](#variable-u8_player_id)  <br>_The id of the player._  |
|  uint8\_t | [**u8\_start\_position**](#variable-u8_start_position)  <br>_The starting position of the player._  |
|  uint8\_t | [**u8\_token\_position**](#variable-u8_token_position)  <br>_The positions of the player's four tokens._  |






































## Public Functions Documentation




### function Is\_Computer 

_Checks if the player is a computer opponent._ 
```C++
inline virtual bool LOGIC::cla_manual_player::Is_Computer () override const
```





**Returns:**

true if the player is a computer opponent, false otherwise. 





        
Implements [*LOGIC::cla\_player::Is\_Computer*](classLOGIC_1_1cla__player.md#function-is_computer)




### function cla\_manual\_player 

```C++
LOGIC::cla_manual_player::cla_manual_player (
    uint8_t _u8_player_id,
    uint8_t _u8_start_position,
    uint8_t _u8_computer_quantity,
    cla_session * _obj_my_session
) 
```




------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/logic.hpp`

