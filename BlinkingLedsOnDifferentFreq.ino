int timer = 0;

bool state4 = 0;
bool state5 = 0;
bool state6 = 0;

void setup() {

  pinMode(4, OUTPUT);

  pinMode(5, OUTPUT);

  pinMode(6, OUTPUT);



  TCCR0A = (1 << WGM01); //Set the CTC mode

  OCR0A = 0xF9; //Value for ORC0A for 1ms


  TIMSK0 |= (1 << OCIE0A); //Set the interrupt request

  sei(); //Enable interrupt



  TCCR0B |= (1 << CS01); //Set the prescale 1/64 clock

  TCCR0B |= (1 << CS00);

}


void loop() {

  //in this way you can count 1 second because the nterrupt request is each 1ms

  if (timer >= 1000) {

    state4 = true;
    state5 = false;
    state6 = false;
    timer = 0;

  } else if (timer >= 666) {
    state5 = true;
    state4 = false;
    state6 = false;
  } else if (timer >= 333) {
    state6 = true;
    state4 = false;
    state5 = false;
  }


  digitalWrite(4, state4);
  digitalWrite(5, state5);
  digitalWrite(6, state6);

}

ISR(TIMER0_COMPA_vect) {   //This is the interrupt request

  timer++;

}
