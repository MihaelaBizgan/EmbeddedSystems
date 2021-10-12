//Application that detects input to a pin and sets an outpt.

int LED = 13;   // LED is connected to digital pin 13
int LEDinput = 10;
int LED2 = 9;
unsigned long millisOld = 0;
int timeToWait = 200;
int pressNo = 0;
bool oldStateButton = false;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);    // configure digital pin as Output
  pinMode(10, INPUT_PULLUP);
  pinMode(LED2, OUTPUT);

  // Serial.print("Today is: " + dayOfTheWeek(1));
  //Serial.print("Today is: ");
  //dayOfTheWeek(9);
  Serial.println();
  //sum(2, 7);
}

void loop() {

  if (digitalRead(10) == LOW && oldStateButton == false) {
    delay(200);
    Serial.print("Button pressed < ");
    Serial.print(sum(pressNo, 1));
    Serial.println(" > times");
    oldStateButton = true;
  }
  else if (digitalRead(10) == HIGH) {
    oldStateButton = false;
  }

if (millisOld + timeToWait < millis()) {
  blinkLed(9);
  millisOld = millis();
}
}

void blinkLed(int input) {
  //digitalWrite(input, !digitalRead(input));
  digitalWrite(input, LOW);
}

String dayOfTheWeek(int day) {
  switch (day) {
    case 1:
      Serial.print("Monday");
      break;
    case 2:
      Serial.print("Tuesday");
      break;
    case 3:
      Serial.print("Wednesday");
      break;
    case 4:
      Serial.print("Thursday");
      break;
    case 5:
      Serial.print("Friday");
      break;
    case 6:
      Serial.print("Weekend");
    default:
      Serial.print("No such day");
      break;
  }

}

int sum (int number1, int number2) {
  pressNo = number1 + number2;
  return pressNo;
}
