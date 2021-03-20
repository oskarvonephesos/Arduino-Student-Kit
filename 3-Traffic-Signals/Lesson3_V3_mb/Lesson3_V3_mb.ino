void setup() {
  // erst mal sagen welche Pins dran sind und was sie zu erwarten haben
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH);
  delay(15000);

  digitalWrite(4, HIGH);
  delay(3000);

  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  delay(12000);
  digitalWrite(5, LOW);

}
