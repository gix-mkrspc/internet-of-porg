/*
  Based off of Blink Arduino sample code
  When Porg button is clicked the porg will activate GPIO 13 and squawk it
  The LED on the NodeMCU will also light up
*/

void setup() {
  pinMode(13, OUTPUT); // D7
  pinMode(12, INPUT_PULLUP); // D6
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  if (digitalRead(12) == 0) {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
  }
}
