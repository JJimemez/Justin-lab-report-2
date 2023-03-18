/*
Potentiometer RGB from black to white 
The goal of the program is a simple one, it is to make an RGB LED go from black to white while going 
through different colours. This shall be accomplished by using a potentiometer and the “if” 
command. Inside each if command, there should be different variables for the RGB to create a visual 
change from black to a lighter colour, slowly going up to all RGB values at 255. 
*/
int bluePin =10;    //blue RGB LED pin location
int greenPin= 9;  //green RGB LED pin location
int redPin= 8;  //red RGB LED pin location 

void setup() {
pinMode(bluePin, OUTPUT); //making blue RGB LED as output
pinMode(greenPin, OUTPUT);//making green RGB LED as output
pinMode(redPin, OUTPUT); //making red RGB LED RGB output
}

void loop() {
 int Val = analogRead(A0); 
 //creating a variable to be able to read the information from the potentiomater using the analong port
if(Val>816 && Val<=1023){ //if statement to check if the value is between the presets
  analogWrite(redPin,250); //red part of RGB custom number output, max
  analogWrite(greenPin,250); //green part of RGB custom number output, max
  analogWrite(bluePin,250); //blue part of RGB custom number output, max
//white   
}
if(Val>612 && Val<=816){//if statement to check if the value is between the presets
  analogWrite(redPin,231); //red part of RGB custom number output
  analogWrite(greenPin,221); //green part of RGB custom number output
  analogWrite(bluePin,10);  //blue part of RGB custom number output
//yellow   
}
if(Val>408 && Val<=612){ //if statement to check if the value is between the presets
  analogWrite(redPin,10); //red part of RGB custom number output
  analogWrite(greenPin,218); //green part of RGB custom number output
  analogWrite(bluePin,50);  //blue part of RGB custom number output
//green ish
}
if(Val>204 && Val<=408){ //if statement to check if the value is between the presets
  analogWrite(redPin,10); //red part of RGB custom number output
  analogWrite(greenPin,50); //green part of RGB custom number output
  analogWrite(bluePin,150); //blue part of RGB custom number output
//dark blue
}
 if(Val>=0 && Val<=204){ //if statement to check if the value is between the presets
  analogWrite(redPin,0); //red part of RGB custom number output, minimum
  analogWrite(greenPin,0); //green part of RGB custom number output, minimum
  analogWrite(bluePin,0); //blue part of RGB custom number output, minimum
//black   
 }
}