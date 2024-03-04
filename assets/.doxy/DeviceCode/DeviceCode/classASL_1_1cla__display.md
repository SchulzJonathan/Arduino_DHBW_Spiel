

# Class ASL::cla\_display



[**ClassList**](annotated.md) **>** [**ASL**](namespaceASL.md) **>** [**cla\_display**](classASL_1_1cla__display.md)



_display handler_ [More...](#detailed-description)

* `#include <ASL.hpp>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**Begin**](#function-begin) () <br>_Initial Setup._  |
|  bool | [**Blink\_Is\_On**](#function-blink_is_on) () <br>_Is Blinking On?_  |
|  void | [**Blink\_Start**](#function-blink_start) (en\_blink\_mode \_en\_blink\_mode, int8\_t \_i8\_blink\_cycles, en\_blink\_type \_en\_blink\_type, uint8\_t \_u8\_blink\_player\_number, int8\_t \_i8\_blink\_second\_player, uint8\_t \_u8\_new\_position=0, bool \_bool\_occupied\_flag=true, uint8\_t \_u8\_old\_position=0) <br>_Blink method._  |
|  void | [**Blink\_Stop**](#function-blink_stop) () <br>_Stop blinking._  |
|  bool | [**Blink\_Update**](#function-blink_update) (bool \_bool\_isr\_active) <br>_Update the Blink state._  |
|  void | [**Display\_Char**](#function-display_char) (char \_ch\_first\_letter=' ', char \_ch\_second\_letter=' ', char \_ch\_third\_letter=' ') <br>_Display the Word._  |
|  void | [**Display\_Clear\_Right**](#function-display_clear_right) () <br>_clears the right half of the display._  |
|  void | [**Display\_Current\_Player**](#function-display_current_player) (int8\_t \_i8\_current\_player\_number, int8\_t \_i8\_tokens\_at\_home=-1) <br>_Display the Current Player._  |
|  void | [**Display\_Dice**](#function-display_dice) (uint8\_t \_u8\_dice\_value, uint8\_t \_u8\_dice\_roll\_counter, int8\_t \_i8\_current\_player\_number, bool \_bool\_animate=true) <br>_Display the dice._  |
|  void | [**Display\_Players**](#function-display_players) (uint8\_t \_u8\_player\_quantity, bool \_bool\_tokens\_at\_home=true) <br>_Display the Players all in home._  |
|  void | [**Display\_Progress**](#function-display_progress) (int8\_t \_i8\_current\_player\_number, uint8\_t \_u8\_progress) <br>_Display the Progress This method can display the progress of the Player._  |
|  void | [**Display\_Restore**](#function-display_restore) () <br>_Restore Display to track only._  |
|  void | [**Display\_Track**](#function-display_track) () <br>_Display the Track._  |
|  void | [**Modify\_Position**](#function-modify_position) (uint8\_t \_u8\_position, uint8\_t \_u8\_player\_number, bool bool\_remove) <br> |
|  void | [**Move\_Token**](#function-move_token) (uint8\_t \_u8\_player\_nr, uint8\_t \_u8\_remove\_position, uint8\_t \_u8\_add\_position) <br>_Move a Token._  |
|  void | [**Set\_Colors**](#function-set_colors) (uint8\_t \_u8\_player\_nr, uint16\_t \_u16\_bright\_color, uint16\_t \_u16\_dark\_color) <br>_Set the Colors of the player._  |
|   | [**cla\_display**](#function-cla_display) (uint8\_t \_u8\_matrix\_a, uint8\_t u8\_matrix\_b, uint8\_t u8\_matrix\_c, uint8\_t u8\_matrix\_clk, uint8\_t u8\_lat, uint8\_t u8\_matrix\_oe) <br>_Constructor of the class._  |




























# Detailed Description


This class handles all the functions and parameters needed to display the game. 


    
## Public Functions Documentation




### function Begin 

_Initial Setup._ 
```C++
void ASL::cla_display::Begin () 
```



This function must be called ONCE at the beginning of the Code 


        



### function Blink\_Is\_On 

_Is Blinking On?_ 
```C++
bool ASL::cla_display::Blink_Is_On () 
```





**Returns:**

true if blinking is on, false otherwise 





        



### function Blink\_Start 

_Blink method._ 
```C++
void ASL::cla_display::Blink_Start (
    en_blink_mode _en_blink_mode,
    int8_t _i8_blink_cycles,
    en_blink_type _en_blink_type,
    uint8_t _u8_blink_player_number,
    int8_t _i8_blink_second_player,
    uint8_t _u8_new_position=0,
    bool _bool_occupied_flag=true,
    uint8_t _u8_old_position=0
) 
```



This method can blink
* a token to display possible Progress (token)
* two tokens alternating in the color of two players (token\_thrown)






**Parameters:**


* `_en_blink_mode` The mode of the blinking (fast/slow/off) 
* `_i8_blink_cycles` The number of cycles to blink (-1: infinite) 
* `_en_blink_type` The type of the blinking (token/token\_thrown/starting\_square/winner\_animation) 
* `_u8_blink_player_number` The number of the player to blink. 
* `_i8_blink_second_player` The number of the second player to blink. 
* `_u8_new_position` new position of the token. default: 0. Different use in case of blink\_type starting\_square: Tokens at home, signaled by the bit position (1 &lt;&lt; tokennr -&gt; token is home).
* `_bool_occupied_flag` flag used in token mode to determine the color to alternate the new position to. default: true
* `_u8_old_position` old position of the token. default: 0 




        



### function Blink\_Stop 

```C++
void ASL::cla_display::Blink_Stop () 
```






### function Blink\_Update 

_Update the Blink state._ 
```C++
bool ASL::cla_display::Blink_Update (
    bool _bool_isr_active
) 
```





**Parameters:**


* `_bool_isr_active` flag to determine if the function is called from an interupt service routine. 



**Returns:**

true if the Blinking wasn't executed due to it possibly taking too long. 





        



### function Display\_Char 

_Display the Word._ 
```C++
void ASL::cla_display::Display_Char (
    char _ch_first_letter=' ',
    char _ch_second_letter=' ',
    char _ch_third_letter=' '
) 
```





**Parameters:**


* `_ch_first_letter` The first letter of the word to display. default: ' '
* `_ch_second_letter` The second letter of the word to display. default: ' ' 




        



### function Display\_Clear\_Right 

```C++
void ASL::cla_display::Display_Clear_Right () 
```






### function Display\_Current\_Player 

_Display the Current Player._ 
```C++
void ASL::cla_display::Display_Current_Player (
    int8_t _i8_current_player_number,
    int8_t _i8_tokens_at_home=-1
) 
```



This method can display the current player on the matrix.




**Parameters:**


* `_i8_current_player_number` The number of the current player. 
* `_u8_tokens_at_home` Tokens at home, signaled by the bit position (1 &lt;&lt; tokennr -&gt; token is home). default: -1 (don't animate) 




        



### function Display\_Dice 

_Display the dice._ 
```C++
void ASL::cla_display::Display_Dice (
    uint8_t _u8_dice_value,
    uint8_t _u8_dice_roll_counter,
    int8_t _i8_current_player_number,
    bool _bool_animate=true
) 
```



Display the Dice on the matrix. when Set to animate, it will play a small animation. The animation uses a simple delay instead of interupts, since the program is not supposed to keep running while the animation is played.




**Parameters:**


* `_u8_dice_value` The value to be displayed. 
* `_u8_dice_roll_counter` The number of the current roll. 
* `_i8_current_player_number` The number of the current player. 
* `_bool_animate` flag to determine if the dice should be animated. should be handled with care as it uses Delay. default: true 




        



### function Display\_Players 

_Display the Players all in home._ 
```C++
void ASL::cla_display::Display_Players (
    uint8_t _u8_player_quantity,
    bool _bool_tokens_at_home=true
) 
```



This method is supposed to be called when setting the Game up. It displays the number of players that are currently chosen.




**Parameters:**


* `_u8_player_quantity` The number of Players to be displayed. 




        



### function Display\_Progress 

_Display the Progress This method can display the progress of the Player._ 
```C++
void ASL::cla_display::Display_Progress (
    int8_t _i8_current_player_number,
    uint8_t _u8_progress
) 
```





**Parameters:**


* `_i8_current_player_number` The number of the current player. 
* `_u8_progress` The progress of the player. (0:28) 




        



### function Display\_Restore 

```C++
void ASL::cla_display::Display_Restore () 
```






### function Display\_Track 

```C++
void ASL::cla_display::Display_Track () 
```






### function Modify\_Position 

```C++
void ASL::cla_display::Modify_Position (
    uint8_t _u8_position,
    uint8_t _u8_player_number,
    bool bool_remove
) 
```






### function Move\_Token 

_Move a Token._ 
```C++
void ASL::cla_display::Move_Token (
    uint8_t _u8_player_nr,
    uint8_t _u8_remove_position,
    uint8_t _u8_add_position
) 
```



This method can move a token.




**Parameters:**


* `_u8_player_number` chosen player 
* `_u8_old_position` old position of the token 
* `_u8_new_position` new position of the token 




        



### function Set\_Colors 

_Set the Colors of the player._ 
```C++
void ASL::cla_display::Set_Colors (
    uint8_t _u8_player_nr,
    uint16_t _u16_bright_color,
    uint16_t _u16_dark_color
) 
```





**Parameters:**


* `_u8_player_nr` Number of the Player (0:3) 
* `_u16_bright_color` Bright Color for the Player 
* `_u16_dark_color` Dark Color for the Player 




        



### function cla\_display 

```C++
ASL::cla_display::cla_display (
    uint8_t _u8_matrix_a,
    uint8_t u8_matrix_b,
    uint8_t u8_matrix_c,
    uint8_t u8_matrix_clk,
    uint8_t u8_lat,
    uint8_t u8_matrix_oe
) 
```




------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/ASL/ASL.hpp`

