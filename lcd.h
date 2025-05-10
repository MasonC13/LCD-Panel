#include <avr/io.h>
#ifndef LCD_H
#define LCD_H

// #define CTRL_DDR DDRD
// #define CTRL_PORT PORTD
// #define RS      (1<<PD6)
// RS pin is wired to PD6 so we must pass value 12 
// #define ENABLE  (1<<PD7)
// ENABLE pin is wired to PD7 so we must pass value 13
// #define DATA_DDR DDRB
// #define DATA_PORT PORTB
// #define DB4     (1<<PB0)
// DB4 pin is wired to PB0 so we must pass value 14
// #define DB5     (1<<PB1)
// DB5 pin is wired to PB1 so we must pass value 15
// #define DB6     (1<<PB2)
// DB6 pin is wired to PB2 so we must pass value 16
// #define DB7     (1<<PB3)
// DB7 pin is wired to PB3 so we must pass value 17


void lcdInit(uint8_t rs, uint8_t enable, uint8_t db4, uint8_t db5, uint8_t db6, uint8_t db7);
void lcdHome(void);
void lcdPutc(uint8_t c);
void lcdClear(void);
void lcdCursorOn(void);
void lcdCursorOff(void);
void lcdPuts(unsigned char *s);

#endif
