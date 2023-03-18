/*
LCD Bit and Voltage value
The goal of this program is to show the bit and voltage values of the potentiometer on the LCD screen. To 
accomplish this goal, the use of the LiquidCrystal library will be needed and the of the different LCD 
commands such as “lcd.print/lcd.setCursor”. The lcd commands are like the serial.print are, the only 
difference is that one is on the serial monitor and the other is on a physical screen.
*/
#include <LiquidCrystal.h>  //adding the library code of the LCD to this code
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //all the pin locations fro the LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //initialize the library to the pin numbers to the LCD

void setup() {
lcd.begin(16,2); // setting the peramiters for how big the LCD screen is
}
void loop() {
int z= analogRead (A0); //foat to be able to use decimal, reading the value of the potentiometer
float A0Voltage=z*5.0/1023.0;//it is calculation for volatge
lcd.setCursor(0,0); //is the location of where you will start, (0,0) is the first row begening of the screen
lcd.print("bit= "); //this will print the word "bit=" in the LCD screen
lcd.print(z); //this will print the value of the potentiometer on the LCD screen
lcd.setCursor(0,1); //is the location of where you will start, (0,1) is the second row begening of the screen
lcd.print("volt="); //this will print the word "volt=" in the LCD screen
lcd.print(A0Voltage); //this will print the voltage value on the LDC screen
delay(30); //a fast delay
lcd.clear();  //clears everything on the LCD screen
}