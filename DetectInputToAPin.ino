int ledPin = 13;  // LED connected to digital pin 13
int val = 0;      // variable to store the read value
int inPin = 7;    // connected digital pin 7

void setup() {
 Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  // sets the digital pin 13 as output
  pinMode(inPin, INPUT);    // sets the digital pin 7 as input
  //Serial.print("It's a rainy day today!");
}

void loop() {
 val = digitalRead(inPin);   // read the input pin
 digitalWrite(ledPin, val);  // sets the LED to the button's value

}
