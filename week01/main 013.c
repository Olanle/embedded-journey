#include <stdio.h>
#include <stdint.h>

int main(void) {
    printf("uint8_t:  size=%zu, max=%u\n", sizeof(uint8_t),  UINT8_MAX);
    printf("uint16_t: size=%zu, max=%u\n", sizeof(uint16_t), UINT16_MAX);
    printf("uint32_t: size=%zu, max=%u\n", sizeof(uint32_t), UINT32_MAX);
    
    uint8_t x = 255;
    x++;
    printf("%u\n", x);   // prints 0
    
    return 0;
}

/*
“Done when: you can explain why x becomes 0.”
This is the goal of the exercise. The explanation:

uint8_t is an unsigned 8-bit integer: 8 binary digits, so it can hold 0 to 255 (2⁸ − 1).
255 in binary is 11111111, so every bit is already 1.
Adding 1 gives 100000000, which needs 9 bits. There’s no room for the 9th bit, so it is discarded, leaving 00000000, which is 0.
This is called overflow (or “wraparound”). For unsigned types, C defines this behavior: the result is the value modulo 2⁸, so (255 + 1) mod 256 = 0. It’s like a car odometer rolling over from 99999 to 00000.

*/

