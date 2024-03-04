

# File interupt.cpp



[**FileList**](files.md) **>** [**COD\_ENG\_OUT\_arduino\_code**](dir_e46236678326602fb51a33a9a20e1fb4.md) **>** [**src**](dir_38410eb1dec6281e0e0807d9e6ad57cf.md) **>** [**interupt.cpp**](interupt_8cpp.md)

[Go to the source code of this file](interupt_8cpp_source.md)

_This file contains all interupt routines._ 

* `#include <ASL.hpp>`
* `#include <Arduino.h>`
* `#include <logic.hpp>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  bool | [**bool\_blink\_flag**](#variable-bool_blink_flag)  <br> |
|  [**ASL::en\_state**](namespaceASL.md#enum-en_state) | [**en\_current\_state**](#variable-en_current_state)  <br> |
|  int8\_t | [**i8\_current\_token\_number**](#variable-i8_current_token_number)  <br> |
|  [**ASL::cla\_display**](classASL_1_1cla__display.md) | [**obj\_display**](#variable-obj_display)  <br> |
|  uint8\_t | [**u8\_computer\_quantity**](#variable-u8_computer_quantity)  <br> |
|  uint8\_t | [**u8\_player\_quantity**](#variable-u8_player_quantity)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ISR**](#function-isr) (INT4\_vect) <br>_interupt routine for the Choose (green) Button._  |
|   | [**ISR**](#function-isr) (INT5\_vect) <br>_interupt routine for the Submit (red) Button._  |
|   | [**ISR**](#function-isr) (TIMER3\_COMPA\_vect) <br>_interupt routine for the Timer 3._  |
|   | [**ISR**](#function-isr) (TIMER4\_COMPA\_vect) <br>_interupt routine for the Timer 4._  |
|   | [**ISR**](#function-isr) (TIMER5\_COMPA\_vect) <br>_interupt routine for the Timer 5._  |




























## Public Attributes Documentation




### variable bool\_blink\_flag 

```C++
volatile bool bool_blink_flag;
```






### variable en\_current\_state 

```C++
volatile ASL::en_state en_current_state;
```






### variable i8\_current\_token\_number 

```C++
volatile int8_t i8_current_token_number;
```






### variable obj\_display 

```C++
ASL::cla_display obj_display;
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




### function ISR 

_interupt routine for the Choose (green) Button._ 
```C++
ISR (
    INT4_vect
) 
```



This interupt is used for state manipulation. 


        



### function ISR 

_interupt routine for the Submit (red) Button._ 
```C++
ISR (
    INT5_vect
) 
```



This interupt is used for state manipulation. 


        



### function ISR 

_interupt routine for the Timer 3._ 
```C++
ISR (
    TIMER3_COMPA_vect
) 
```



This interupt is used for button debounce. it will be triggered shortly after button interupts to reenable the buttons. 


        



### function ISR 

_interupt routine for the Timer 4._ 
```C++
ISR (
    TIMER4_COMPA_vect
) 
```



This interupt is used for the display update when using the Blink method. It might just set the bool\_blink\_flag, if updating the display would take too long for the ISR. 


        



### function ISR 

_interupt routine for the Timer 5._ 
```C++
ISR (
    TIMER5_COMPA_vect
) 
```



This interupt does nothing except disabling itself. The Delay\_256 function will pause and return when this interrupt occurs. 


        

------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/src/interupt.cpp`

