/*
  Based off of Blink Arduino sample code
  The porg will squawk repeatedly from the NodeMCU simulating a button press
  The LED on the NodeMCU will also light up
*/

void setup() {
  pinMode(14, OUTPUT); // D5
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(14, HIGH);
  delay(1000);
  digitalWrite(14, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
