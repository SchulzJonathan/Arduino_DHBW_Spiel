

# File main.cpp



[**FileList**](files.md) **>** [**COD\_ENG\_OUT\_arduino\_code**](dir_e46236678326602fb51a33a9a20e1fb4.md) **>** [**src**](dir_38410eb1dec6281e0e0807d9e6ad57cf.md) **>** [**main.cpp**](main_8cpp.md)

[Go to the source code of this file](main_8cpp_source.md)

_This file contains the main loop and setup of the game._ [More...](#detailed-description)

* `#include <ASL.hpp>`
* `#include <Arduino.h>`
* `#include <defines.hpp>`
* `#include <logic.hpp>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  bool | [**bool\_blink\_flag**](#variable-bool_blink_flag)   = = false<br> |
|  [**ASL::en\_state**](namespaceASL.md#enum-en_state) | [**en\_current\_state**](#variable-en_current_state)   = = ASL::display\_setup\_real\_players<br> |
|  int8\_t | [**i8\_current\_player\_number**](#variable-i8_current_player_number)  <br> |
|  int8\_t | [**i8\_current\_token\_number**](#variable-i8_current_token_number)  <br> |
|  [**ASL::cla\_display**](classASL_1_1cla__display.md) | [**obj\_display**](#variable-obj_display)  <br> |
|  [**LOGIC::cla\_session**](classLOGIC_1_1cla__session.md) \* | [**obj\_session**](#variable-obj_session)  <br> |
|  uint8\_t | [**u8\_computer\_quantity**](#variable-u8_computer_quantity)  <br> |
|  uint8\_t | [**u8\_player\_quantity**](#variable-u8_player_quantity)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**Move\_Token**](#function-move_token) (int8\_t \_i8\_current\_player\_number, uint8\_t \_u8\_remove\_position, uint8\_t \_u8\_add\_position, [**ASL::cla\_display**](classASL_1_1cla__display.md) \* \_obj\_display, [**LOGIC::cla\_session**](classLOGIC_1_1cla__session.md) \* \_obj\_session, uint8\_t \_u8\_player\_quantity, uint8\_t \_u8\_dice\_value) <br>_This function animates the token movement._  |
|  void | [**loop**](#function-loop) () <br> |
|  void | [**setup**](#function-setup) () <br> |




























# Detailed Description


In this file, the setup and loop functions are implemented. 


    
## Public Attributes Documentation




### variable bool\_blink\_flag 

```C++
volatile bool bool_blink_flag;
```






### variable en\_current\_state 

```C++
volatile ASL::en_state en_current_state;
```






### variable i8\_current\_player\_number 

```C++
volatile int8_t i8_current_player_number;
```






### variable i8\_current\_token\_number 

```C++
volatile int8_t i8_current_token_number;
```






### variable obj\_display 

```C++
ASL::cla_display obj_display(A, B, C, CLK, LAT, OE);
```






### variable obj\_session 

```C++
LOGIC::cla_session* obj_session;
```






### variable u8\_computer\_quantity 

```C++
uint8_t u8_computer_quantity;
```






### variable u8\_player\_quantity 

```C++
uint8_t u8_player_quantity;
```



## Public Functions Documentation




### function Move\_Token 

_This function animates the token movement._ 
```C++
void Move_Token (
    int8_t _i8_current_player_number,
    uint8_t _u8_remove_position,
    uint8_t _u8_add_position,
    ASL::cla_display * _obj_display,
    LOGIC::cla_session * _obj_session,
    uint8_t _u8_player_quantity,
    uint8_t _u8_dice_value
) 
```



This function animates the movement of a token from one position to another.




**Parameters:**


* `_i8_current_player_number` The number of the current player. 
* `_u8_remove_position` The start position for the token to start walking. 
* `_u8_add_position` The end position for the token to stop walking. 
* `_obj_display` Pointer to the display object. 
* `_obj_session` Pointer to the session object. 
* `_u8_player_quantity` The number of players. 
* `_u8_dice_value` The distance the token will walk. 




        



### function loop 

```C++
void loop () 
```






### function setup 

```C++
void setup () 
```




------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/src/main.cpp`

