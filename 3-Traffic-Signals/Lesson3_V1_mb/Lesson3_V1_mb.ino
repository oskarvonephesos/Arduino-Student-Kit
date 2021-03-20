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

}
