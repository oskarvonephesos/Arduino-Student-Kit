void setup() {
  // erst mal sagen welche Pins dran sind und was sie zu erwarten haben
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH); // stellt 5V an (=HIGH) auf Pin 3
  digitalWrite(4, HIGH); // stellt 5V an auf Pin 4
  digitalWrite(5, HIGH); // stellt 5V an auf Pin 5
  delay(2000);
  digitalWrite(3, LOW); // stellt 5V aus (=LOW) auf Pin 3
  digitalWrite(4, LOW); // stellt 5V aus auf Pin 4
  digitalWrite(5, LOW); // stellt 5V aus auf Pin 5
  delay(2000);
}
