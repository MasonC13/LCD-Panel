all: main.hex

install: main.hex
	avrdude -C "C:\Program Files (x86)\Arduino\hardware\tools\avr\etc\avrdude.conf" -p atmega328p -c usbtiny -U flash:w:main.hex:i

main.hex: main.elf
	avr-objcopy -j .text -j .data -O ihex main.elf main.hex

main.elf: main.o lcd.o delay.o
	avr-gcc -mmcu=atmega328p -o main.elf main.o lcd.o delay.o

main.o: main.c lcd.h delay.h
	avr-gcc -mmcu=atmega328p -c -o main.o main.c

lcd.o: lcd.c lcd.h
	avr-gcc -mmcu=atmega328p -c -o lcd.o lcd.c

delay.o: delay.S delay.h
	avr-gcc -mmcu=atmega328p -c -o delay.o delay.S

clean:
	del *.o *.elf *.hex *.lst*


