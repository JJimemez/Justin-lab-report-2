/*
LCD with Push Button
The use of the LiquidCrystal library will be needed and the of the different LCD commands such as 
“lcd.print/lcd.setCursor”. The lcd commands are like the serial.print are, the only difference 
is that one is on the serial monitor and the other is on a physical screen. In this program you 
will make it so that when the push button is not pressed the bit value will be shown on the 
LCD screen and when the push button is pressed the voltage will be displayed on the LCD screen.
*/
#include <LiquidCrystal.h> //adding the library code of the LCD to this code
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 
//all the pin locations fro the LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 
//initialize the library to the pin numbers to the LCD
int pushButton =13; /location of pin number for Push button

void setup() {
lcd.begin(16,2); //setting the peramiters for how big the LCD screen is
pinMode(pushButton,INPUT_PULLUP); //making it so that the push button is an input
}
void loop() {
int z= analogRead (A0); 
//foat to be able to use decimal, reading the value of the potentiometer
float A0Voltage=z*5.0/1023.0; //it is calculation for volatge
int buttonState =digitalRead(pushButton); 
//creating a variable to be able to read the information from the push button
/*************************************************************************************/
if(!buttonState==LOW){ //if statement to check if the buttonState value is LOW
lcd.setCursor(0,0); 
//is the location of where you will start, (0,0) is the first row begening of the screen
lcd.print("bit= "); //this will print the word "bit=" in the LCD screen
lcd.print(z); //this will print the value of the potentiometer on the LCD screen
delay(30); //a fast delay
lcd.clear();  //clears everything on the LCD screen
/************************************************************************************/
if(!buttonState==HIGH){ //if statement to check if the buttonState value is HIGH
lcd.setCursor(0,1); 
//is the location of where you will start, (0,1) is the second row begening of the screen
lcd.print("volt="); //this will print the word "volt=" in the LCD screen
lcd.print(A0Voltage); //this will print the voltage value on the LDC screen
delay(30); //a fast delay
lcd.clear();  //clears everything on the LCD screen
}
}