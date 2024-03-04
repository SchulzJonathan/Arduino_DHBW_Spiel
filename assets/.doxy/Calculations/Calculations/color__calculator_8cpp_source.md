

# File color\_calculator.cpp

[**File List**](files.md) **>** [**COD\_ENG\_CALC\_calculators**](dir_17970de91eb624507a74aaad367e0c70.md) **>** [**color\_calculator.cpp**](color__calculator_8cpp.md)

[Go to the documentation of this file](color__calculator_8cpp.md)

```C++


#include <inttypes.h>
#include <stdio.h>

uint16_t getColor(uint8_t r, uint8_t g, uint8_t b) {
  return ((uint16_t)(r & 0xF8) << 8) | ((uint16_t)(g & 0xFC) << 3) | (b >> 3);
}

int main() {
  int inputr = 0;
  int inputg = 0;
  int inputb = 0;
  scanf("%i", &inputr);
  scanf("%i", &inputg);
  scanf("%i", &inputb);
  uint16_t i = getColor(inputr, inputg, inputb);
  printf("0x%02x\n", i);
  return 0;
}

```

