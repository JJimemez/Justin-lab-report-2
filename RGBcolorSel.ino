/*
RGB color selector
The goal of the program will be to understand how to change 
the RGB colours without using the basic HIGHN,LOW commands 
and this can be done by using the range of 0-255 in the colour 
spectrum. Another command that will be practiced will be the analogWrite.
*/
int red = 2; //Red RGB LED pin location
int green = 3; //green RGB LED pin location
int blue = 4; //Blue RGB LED pin location

void setup() {
pinMode(red, OUTPUT); //making red RGB LED as output
pinMode(green, OUTPUT); //making green RGB LED as output
pinMode(blue, OUTPUT); //making blue RGB LED as output
}

void loop() {
analogWrite(red, 160); //red part of RGB custom number output
analogWrite(green, 90); //green part of RGB custom number output
analogWrite(blue, 15); //blue part of RGB custom number output
//making a yellow ish colour
delay(500);  //delay of one sec
analogWrite(red, 50); //red part of RGB custom number output
analogWrite(green, 150); //green part of RGB custom number output
analogWrite(blue, 90); //blue part of RGB custom number output
//making a light blue
delay(500); //delay of one sec
}
