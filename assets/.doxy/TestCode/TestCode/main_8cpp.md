

# File main.cpp



[**FileList**](files.md) **>** [**COD\_ENG\_OUT\_Pruefgeraet**](dir_a5ee031e87d12abe48a2fc4670eea239.md) **>** [**src**](dir_6fb120e1e93f6ff794cb9ba09d32e262.md) **>** [**main.cpp**](main_8cpp.md)

[Go to the source code of this file](main_8cpp_source.md)



* `#include <Arduino.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  float | [**fl\_high\_frequency**](#variable-fl_high_frequency)   = = 0.0<br> |
|  float | [**fl\_low\_frequency**](#variable-fl_low_frequency)   = = 0.0<br> |
|  const int | [**i\_pin**](#variable-i_pin)   = = 2<br> |
|  uint32\_t | [**u32\_duration\_high**](#variable-u32_duration_high)   = = 0<br> |
|  uint32\_t | [**u32\_duration\_low**](#variable-u32_duration_low)   = = 0<br> |
|  uint32\_t | [**u32\_start\_time\_high**](#variable-u32_start_time_high)   = = 0<br> |
|  uint32\_t | [**u32\_start\_time\_low**](#variable-u32_start_time_low)   = = 0<br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**Pin\_Change**](#function-pin_change) () <br>_This function is responsible for handling pin state changes._  |
|  void | [**loop**](#function-loop) () <br> |
|  void | [**setup**](#function-setup) () <br> |




























## Public Attributes Documentation




### variable fl\_high\_frequency 

```C++
float fl_high_frequency;
```






### variable fl\_low\_frequency 

```C++
float fl_low_frequency;
```






### variable i\_pin 

```C++
const int i_pin;
```






### variable u32\_duration\_high 

```C++
volatile uint32_t u32_duration_high;
```






### variable u32\_duration\_low 

```C++
volatile uint32_t u32_duration_low;
```






### variable u32\_start\_time\_high 

```C++
volatile uint32_t u32_start_time_high;
```






### variable u32\_start\_time\_low 

```C++
volatile uint32_t u32_start_time_low;
```



## Public Functions Documentation




### function Pin\_Change 

_This function is responsible for handling pin state changes._ 
```C++
void Pin_Change () 
```



\


This function reads the state of a digital pin and records the timing information for transitions between HIGH and LOW states. It calculates the duration of the HIGH and LOW states and updates the corresponding variables accordingly. 


        



### function loop 

```C++
void loop () 
```






### function setup 

```C++
void setup () 
```




------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_Pruefgeraet/src/main.cpp`

