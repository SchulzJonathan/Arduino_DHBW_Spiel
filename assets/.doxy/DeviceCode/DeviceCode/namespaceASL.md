

# Namespace ASL



[**Namespace List**](namespaces.md) **>** [**ASL**](namespaceASL.md)




















## Classes

| Type | Name |
| ---: | :--- |
| class | [**cla\_display**](classASL_1_1cla__display.md) <br>_display handler_  |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**en\_blink\_mode**](#enum-en_blink_mode)  <br> |
| enum  | [**en\_blink\_type**](#enum-en_blink_type)  <br> |
| enum  | [**en\_state**](#enum-en_state)  <br>_the states of the finite state machine._  |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**Delay\_256**](#function-delay_256) (uint16\_t \_u16\_delay) <br>_Delay._  |
|  uint8\_t | [**Roll\_Dice**](#function-roll_dice) () <br>_roll the Dice._  |
|  void | [**Setup\_Buttons**](#function-setup_buttons) () <br>_setup function for the Buttons_  |
|  void | [**Setup\_Dice**](#function-setup_dice) () <br>_setup function for the Dice_  |




























## Public Types Documentation




### enum en\_blink\_mode 

```C++
enum ASL::en_blink_mode {
    off = 0,
    fast,
    slow
};
```






### enum en\_blink\_type 

```C++
enum ASL::en_blink_type {
    token = 0,
    token_thrown,
    starting_square,
    winner_animation
};
```






### enum en\_state 

_the states of the finite state machine._ 
```C++
enum ASL::en_state {
    display_setup_real_players = 0,
    setup_real_players,
    modify_real_player_number,
    display_setup_computer_players,
    setup_computer_players,
    modify_computer_player_number,
    display_setup_computer_player_mode,
    setup_computer_player_mode,
    modify_computer_player_mode,
    init_game_logic,
    wait_for_dice_roll,
    roll_the_dice,
    wait_for_player_input,
    display_token,
    validate_token,
    move_token,
    next_player,
    game_finished
};
```



Defines the states of the finite state machine. Starting state is 1. 


        
## Public Functions Documentation




### function Delay\_256 

_Delay._ 
```C++
void ASL::Delay_256 (
    uint16_t _u16_delay
) 
```



This function is a simple delay function. It uses Timer 5 with /256 clk divider to count to the value in the transfer parameter. when reached, the function returns.




**Parameters:**


* `_u16_delay` The number of timer cycles to delay. 




        



### function Roll\_Dice 

_roll the Dice._ 
```C++
uint8_t ASL::Roll_Dice () 
```



This function reads the TCNT register value, adds one and returns it. In Order to receive a Value between 1 and 6, the [**Setup\_Dice()**](namespaceASL.md#function-setup_dice) function must be called beforehand (ONCE). 


        



### function Setup\_Buttons 

_setup function for the Buttons_ 
```C++
void ASL::Setup_Buttons () 
```



Sets Buttons on Pin 2 and 3 to input and enables interupt for them. This function must be called ONCE at the beginning of the program in Order for the Buttons to work. 


        



### function Setup\_Dice 

_setup function for the Dice_ 
```C++
void ASL::Setup_Dice () 
```



Sets Timer 0 to count to 5 using CTC mode, so the value read from the TCNT register can be used as a dice value after adding 1. This function must be called ONCE at the beginning of the program in Order for the Dice to work. 


        

------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/ASL/ASL.hpp`

