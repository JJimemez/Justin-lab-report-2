/*
Potentiometer readings
In this program you will get used to using the potentiometer, as well as implementing math to the 
program. The goal of the program will be to show the bit value of the potentiometer as well as the 
voltage. These can be accomplished by using analogRead command, a float command to be able to read 
decimal places and the math formula of the input*5.0/1023.0. 
*/
void setup() {
Serial.begin(9600); //set the Arduino speed for serial
}

void loop() {
float z= analogRead (A0); //foat to be able to use decimal, reading the value of the potentiometer
float A0Voltage=z*5.0/1023.0; //it is calculation for volatge
Serial.print("bit="); //this will print the word "bit=" in the serial monitor
Serial.print(z); //this will print the value of the potentiometer on the serial monitor
Serial.print("\t"); //this will create a space in between prints
Serial.print("volt=");//this will print the word "volt=" in the serial monitor
Serial.println(A0Voltage); //this will print the voltage value on the serial monitor
}
