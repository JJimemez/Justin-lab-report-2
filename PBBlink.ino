/*
Push button and blinking LED
The goal of this program is to be able to have a light blink and a push button 
working without interrupting each other. This shall be accomplished by using the “const” 
command, that will make it so that whatever value is on it will not be changed by others. 
Another important command will be the millis command, this will be used to make a separate 
time cycle for the blink.
*/
const int redPin =9; //red LED set to a constant value at pin 9
int ledState = LOW; 
//setting ledState as intiger and making it a value of low
unsigned long previousMillis = 0;  //
const long interval = 1000; //a constant value with a long for the value will be large
int pushButton =8; //push button pin location

void setup() {
  Serial.begin(9600); //set the Arduino speed for serial
  pinMode(pushButton, INPUT_PULLUP); 
  //making it so that the push button is an input with internal resistor
  pinMode(redPin, OUTPUT); //making red LED as output
}

void loop() {
unsigned long currentMillis = millis();
 int buttonState = digitalRead(pushButton); //reading the value of the push button
   if (currentMillis - previousMillis >= interval) { // save the last time you blinked the LED
    previousMillis = currentMillis;  //making previousMillis equal to current Millis value
  if (ledState == LOW) { // if the LED is off turn it on and vice-versa:
      ledState = HIGH;  //making the ledState change to HIGH
    } else { //else statement, if the if statement is false this happens
      ledState = LOW; //doing the oposite of the last one and making the ledState low
    }
   }
  Serial.print("button value="); //this will print the word "button value=" in the serial monitor
  Serial.println(!buttonState); //this will print the inverted value of the push button on the serial monitor
  digitalWrite(redPin,ledState);  //turning red LED on, with the ledState 
  }