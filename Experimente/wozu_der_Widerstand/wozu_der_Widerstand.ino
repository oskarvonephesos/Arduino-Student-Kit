void setup() {
  // erst mal sagen welche Pins dran sind und was sie zu erwarten haben
  pinMode(12, OUTPUT);
  pinMode(7, INPUT);

}

void loop() {
  if (digitalRead(7) == HIGH) {
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(12, LOW);
    delay(300);  
    }

}
