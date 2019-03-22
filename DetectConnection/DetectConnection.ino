// This program turns the LED on pin 13 on if the ground and pin 2 are connected.
// This also works with grounding the TX (0) and RX (1) pins

#define INPIN 2
#define LEDPIN 13

#define ON 1
#define OFF 0

void setup() {
  pinMode(INPIN, INPUT_PULLUP);
  pinMode(LEDPIN, OUTPUT);
}

void loop() {
  // this turns on the LEDPIN if the ground and the INPIN are connected
  if ( digitalRead(INPIN) == OFF ) {
    digitalWrite(LEDPIN, ON);
  } else {
    digitalWrite(LEDPIN, OFF);
  }
}
