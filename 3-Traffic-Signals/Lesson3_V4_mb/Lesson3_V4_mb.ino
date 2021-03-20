void setup() {
  // erst mal sagen welche Pins dran sind und was sie zu erwarten haben
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == LOW) {
    // der originale Ampelcode aus V3
    digitalWrite(3, HIGH);
    delay(3000);

    digitalWrite(4, HIGH);
    delay(500);

    digitalWrite(3, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    delay(3000);
    digitalWrite(5, LOW);
    }

  if (digitalRead(2) == HIGH) {
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);        
    delay(500);
    }

  // ah! meine erste Lösung war nicht kaputt,
  // sondern ich muss den Knopf so lange gedrückt halten,
  // bis die erste if Schleife durch ist,
  // vorher wird das Knopfdrücken ja nicht evaluiert
  // jetzt wieder zurück geändert auf meinen Code

}
