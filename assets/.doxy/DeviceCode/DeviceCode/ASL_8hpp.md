

# File ASL.hpp



[**FileList**](files.md) **>** [**ASL**](dir_9d6c7046ff27a423104698a469533c50.md) **>** [**ASL.hpp**](ASL_8hpp.md)

[Go to the source code of this file](ASL_8hpp_source.md)

_This is the header file for the ASL library._ [More...](#detailed-description)

* `#include <../../include/defines.hpp>`
* `#include <RGBmatrixPanel.h>`
* `#include <inttypes.h>`













## Namespaces

| Type | Name |
| ---: | :--- |
| namespace | [**ASL**](namespaceASL.md) <br> |


## Classes

| Type | Name |
| ---: | :--- |
| class | [**cla\_display**](classASL_1_1cla__display.md) <br>_display handler_  |


















































# Detailed Description


This file contains the forward declarations for:



* the cla\_display class
* the [**ASL::Setup\_Buttons()**](namespaceASL.md#function-setup_buttons) function
* the [**ASL::Setup\_Dice()**](namespaceASL.md#function-setup_dice) function
* the [**ASL::Roll\_Dice()**](namespaceASL.md#function-roll_dice) function
* the [**ASL::Delay\_256()**](namespaceASL.md#function-delay_256) function




The cla\_display class is used to control the RGB LED Matrix. The [**Setup\_Buttons()**](namespaceASL.md#function-setup_buttons) functions sets the interupt buttons. The [**Setup\_Dice()**](namespaceASL.md#function-setup_dice) function sets a timer ot run from 0 to 5 for the dice roll. The [**Roll\_Dice()**](namespaceASL.md#function-roll_dice) reads the value from the Timer that was set up in the [**Setup\_Dice()**](namespaceASL.md#function-setup_dice) function. The [**Delay\_256()**](namespaceASL.md#function-delay_256) function is used to delay the program for a certain amount of time given by the transfer parameter. 


    

------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/ASL/ASL.hpp`

