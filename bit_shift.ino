#include <avr/io.h>  // AVR IO registers for interacting with hardware
#include <util/delay.h> // For delay functions

// Define the CPU frequency if it's not already defined
#ifndef F_CPU
#define F_CPU 16000000UL // Set the frequency to 16 MHz
#endif

int main(void) {

  // Set Port D as output
  DDRD = 0xFF; 
  // Initialize Port D with all LEDs off
  PORTD = 0x00; 

  // Counter variable for iterating through LEDs
  uint8_t counter = 0;

  // Infinite loop
  while (1) {
    // Loop through each LED on Port D
    for (counter = 0; counter < 8; counter++) {
      // Turn on the current LED
      PORTD = (1 << counter);
      // Wait for 50 milliseconds
      _delay_ms(50);
    }
  }

  // Return 0 to indicate successful execution
  return 0;
}