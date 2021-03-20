void setup() {
  // put your setup code here, to run once:
  enum {REDLED=8}
  pinMode(REDLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(REDLED, HIGH);
  delay(599);
  digitalWrite(REDLED, LOW);
  delay(599);  

}

  // …/rs_enum_test/rs_enum_test/rs_enum_test.ino: In function 'void loop()':
  // rs_enum_test:11:16: error: 'REDLED' was not declared in this scope
  //    digitalWrite(REDLED, HIGH);
  //                 ^~~~~~
  // …/rs_enum_test/rs_enum_test/rs_enum_test.ino:11:16: note: suggested alternative: 'EULER'
  //    digitalWrite(REDLED, HIGH);
  //                 ^~~~~~
  //                 EULER
  // exit status 1
  // 'REDLED' was not declared in this scope
