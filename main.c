#include <avr/io.h>
#include "lcd.h"
#include "delay.h"

int main(void) {
    // Step 1: Define the pin numbers for RS, ENABLE, and DB4-DB7
    uint8_t rs_pin = 12;   // RS pin is PD6 (physical pin 12)
    uint8_t enable_pin = 13; // ENABLE pin is PD7 (physical pin 13)
    uint8_t db4_pin = 14;  // DB4 pin is PB0 (physical pin 14)
    uint8_t db5_pin = 15;  // DB5 pin is PB1 (physical pin 15)
    uint8_t db6_pin = 16;  // DB6 pin is PB2 (physical pin 16)
    uint8_t db7_pin = 17;  // DB7 pin is PB3 (physical pin 17)


    while (1 != 0)
    {
    // Step 2: Initialize the LCD by passing pin values to lcdInit
    lcdInit(rs_pin, enable_pin, db4_pin, db5_pin, db6_pin, db7_pin);
    
    // Step 3: Clear the display to start fresh
    lcdClear();
    
    // Step 4: Print "Hello, world." to the LCD
    lcdPuts("Hello, world.");
    
    // Step 5: Home the cursor
    lcdHome();
    
    // Step 6: Turn the cursor on (blinking)
    lcdCursorOn();
    
    // Step 7: Write "HELLO, WORLD!" progressively with a delay
    unsigned char message[] = "HELLO, WORLD!";
    for (unsigned char i = 0; message[i] != '\0'; i++) {
        lcdPutc(message[i]);    // Write the next character to the display
        delay1ms(500);          // Delay between characters
    }
    
    // Step 8: Clear the display
    lcdClear();
    
    // Step 9: Turn off the cursor
    lcdCursorOff();
    
    // Step 10: Print "Goodbye, world." to the LCD
    lcdPuts("Goodbye, world.");
    
    // Delay after the previous message
    delay1ms(1000);
    }
}

