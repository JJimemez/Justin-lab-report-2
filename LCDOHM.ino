/*
LCD Ohmmeter with ohm symbol
The goal of this program is to make the Arduino into a ohmmeter and an addition of the ohm symbol 
at the end The use of the LiquidCrystal library will be needed and the of the different LCD commands 
such as “lcd.print/lcd.setCursor”. The lcd commands are like the serial.print are, the only difference 
is that one is on the serial monitor and the other is on a physical screen. An extra command that will 
be needed is the createChar to be able to add symbols.
*/
#include <LiquidCrystal.h>//adding the library code of the LCD to this code
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //all the pin locations fro the LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //initialize the library to the pin numbers to the LCD
byte newChar[8]={  //This is the setup for the ohm symbol
        B00000,
        B01110,
        B10001,
        B10001,
        B10001,
        B01010,
        B11011,
        B00000,
};

void setup() {
lcd.begin(16,2); //setting the peramiters for how big the LCD screen is
lcd.createChar(0,newChar); //this is what will creat the ohm symbol
}

void loop() {
float z=analogRead (A0); //foat to be able to use decimal, reading the value of the potentiometer
float A0Voltage=(z*5.0)/(1023.0); //it is calculation for volatge
float Ia=(5.0-A0Voltage)/997.0; //the calculation for current
float Rb=(A0Voltage/Ia); //the calculation for resistance
lcd.setCursor(0,0);//is the location of where you will start, (0,0) is the first row begening of the screen
lcd.print("R="); //this will print the word "R=" in the LCD screen
lcd.print(Rb); //this will print the value of the resistance on the LCD screen
lcd.write((byte)0); //this will print the ohm symbol on the LCD screen
delay(30); //a fast delay
lcd.clear(); //clears everything on the LCD screen
}