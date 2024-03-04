

# File color\_calculator.cpp



[**FileList**](files.md) **>** [**COD\_ENG\_CALC\_calculators**](dir_17970de91eb624507a74aaad367e0c70.md) **>** [**color\_calculator.cpp**](color__calculator_8cpp.md)

[Go to the source code of this file](color__calculator_8cpp_source.md)

_This file contains the implementation of the color calculator._ [More...](#detailed-description)

* `#include <inttypes.h>`
* `#include <stdio.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  uint16\_t | [**getColor**](#function-getcolor) (uint8\_t r, uint8\_t g, uint8\_t b) <br>_This function calculates the 16 bit color value from the given RGB values._  |
|  int | [**main**](#function-main) () <br> |




























# Detailed Description


The color calculator is used to calculate the 16 bit color value from RGB values. The 16 Bit intgeger can then be used for the Matrix library directly. This reduces the startuptime of the arduino compared to setting the RGB values in the Setup routine.


The color calculator expects the Values in RGB order. Values can reach from 0 to 255. Be careful as You will NOT be told when input is invalid.


compile with: `gcc  color_calculator.cpp -o color_calculator`


Run with: `./color_calculator` 


    
## Public Functions Documentation




### function getColor 

_This function calculates the 16 bit color value from the given RGB values._ 
```C++
uint16_t getColor (
    uint8_t r,
    uint8_t g,
    uint8_t b
) 
```





**Parameters:**


* `r` The red value of the color. 
* `g` The green value of the color. 
* `b` The blue value of the color. 



**Returns:**

The 16 bit color value to be used for the LED matrix. 





        



### function main 

```C++
int main () 
```




------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_CALC_calculators/color_calculator.cpp`

