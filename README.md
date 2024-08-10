# Basic-Bit-Shift-
This code demonstrates a simple LED chaser program for an AVR microcontroller. It iterates through each LED on Port D, turning it on and then waiting for a short period before moving on to the next LED.

1. **Header Files:**
   - `#include <avr/io.h>`:  Includes the header file for AVR I/O registers, allowing access to hardware peripherals.
   - `#include <util/delay.h>`: Includes header file for delay functions for generating pauses in the program.

2. **F_CPU Definition:**
   - `#ifndef F_CPU ... #endif`:  This ensures the CPU frequency is defined.  If `F_CPU` is not defined, the code defines it as `16000000UL`, which is 16 MHz.  This is crucial for the delay functions to work correctly.

3. **Main Function:**
   - `int main(void) { ... }`: This is the main function where program execution begins.

4. **LED Setup:**
   - `DDRD = 0xFF;`: Sets all pins of Port D as outputs.
   - `PORTD = 0x00;`: Initializes all LEDs on Port D to be off.

5. **LED Chaser Loop:**
   - `while (1) { ... }`: An infinite loop that keeps the program running.
   - `for (counter = 0; counter < 8; counter++) { ... }`: A loop that iterates through each of the 8 LEDs on Port D.
   - `PORTD = (1 << counter);`: Turns on the current LED.
   - `_delay_ms(50);`: Pauses for 50 milliseconds before turning on the next LED.

6. **Return Statement:**
   - `return 0;`:  Returns 0 to indicate successful program execution.
