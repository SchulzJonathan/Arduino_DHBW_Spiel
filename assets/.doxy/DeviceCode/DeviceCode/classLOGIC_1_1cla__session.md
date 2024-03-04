

# Class LOGIC::cla\_session



[**ClassList**](annotated.md) **>** [**LOGIC**](namespaceLOGIC.md) **>** [**cla\_session**](classLOGIC_1_1cla__session.md)



_The_ [_**cla\_session**_](classLOGIC_1_1cla__session.md) _class is the main class of the game logic. It initializes the players with their methods and it provides essential methods for the game logic._

* `#include <logic.hpp>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**cla\_player**](classLOGIC_1_1cla__player.md) \* | [**array\_players**](#variable-array_players)  <br>_Array of pointers to the players._  |
|  uint8\_t | [**u8\_is\_occupied\_player\_id**](#variable-u8_is_occupied_player_id)  <br> |
|  uint8\_t | [**u8\_is\_occupied\_token\_number**](#variable-u8_is_occupied_token_number)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  uint8\_t | [**Get\_Computer\_Quantity**](#function-get_computer_quantity) () <br>_Returns the number of computer players._  |
|  uint8\_t | [**Get\_Player\_Quantity**](#function-get_player_quantity) () <br>_Returns the number of players._  |
|  bool | [**Is\_Occupied**](#function-is_occupied) (uint8\_t & \_u8\_is\_occupied\_player\_id, uint8\_t & \_u8\_is\_occupied\_token\_number, uint8\_t \_u8\_affected\_track\_position) <br>_Checks if the position on the map is occupied._  |
|  bool | [**Return\_Home**](#function-return_home) (uint8\_t \_u8\_affected\_track\_position) <br>_Returns a token to its home position._  |
|   | [**cla\_session**](#function-cla_session) (uint8\_t \_u8\_player\_quantity, uint8\_t \_u8\_computer\_quantity, mode \_en\_mode) <br>_Constructor for the_ [_**cla\_session**_](classLOGIC_1_1cla__session.md) _class._ |




























## Public Attributes Documentation




### variable array\_players 

```C++
cla_player* LOGIC::cla_session::array_players[4];
```






### variable u8\_is\_occupied\_player\_id 


```C++
uint8_t LOGIC::cla_session::u8_is_occupied_player_id;
```



The ID of the player at the occupied track position. 


        



### variable u8\_is\_occupied\_token\_number 


```C++
uint8_t LOGIC::cla_session::u8_is_occupied_token_number;
```



The token number at the occupied track position. 


        
## Public Functions Documentation




### function Get\_Computer\_Quantity 

```C++
uint8_t LOGIC::cla_session::Get_Computer_Quantity () 
```






### function Get\_Player\_Quantity 

```C++
uint8_t LOGIC::cla_session::Get_Player_Quantity () 
```






### function Is\_Occupied 

_Checks if the position on the map is occupied._ 
```C++
bool LOGIC::cla_session::Is_Occupied (
    uint8_t & _u8_is_occupied_player_id,
    uint8_t & _u8_is_occupied_token_number,
    uint8_t _u8_affected_track_position
) 
```





**Parameters:**


* `&u8_is_occupied_player_id` Reference to variable to store the player ID of the occupied track position. 
* `&u8_is_occupied_token_number` Reference to variable to store the token number of the occupied track position. 
* `_u8_affected_track_position` The track position to check. 



**Returns:**

true if occupied, false otherwise. 





        



### function Return\_Home 

_Returns a token to its home position._ 
```C++
bool LOGIC::cla_session::Return_Home (
    uint8_t _u8_affected_track_position
) 
```





**Parameters:**


* `_u8_affected_track_position` The affected track position. 



**Returns:**

true if the token is successfully returned home, false otherwise. 





        



### function cla\_session 

_Constructor for the_ [_**cla\_session**_](classLOGIC_1_1cla__session.md) _class._
```C++
LOGIC::cla_session::cla_session (
    uint8_t _u8_player_quantity,
    uint8_t _u8_computer_quantity,
    mode _en_mode
) 
```





**Parameters:**


* `_u8_player_quantity` Number of all players. 
* `_u8_computer_quantity` Number of computer-controlled players. 




        

------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/logic.hpp`

