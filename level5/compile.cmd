echo "Compiling main file..."

avr-gcc -Os -mmcu=atmega328p ./main.cpp -o ./main.o
	