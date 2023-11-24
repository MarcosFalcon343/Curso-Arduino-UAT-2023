#define flotador1 8
#define flotador2 7
#define bombaAgua 9

void setup() {
  pinMode(flotador1, INPUT);
  pinMode(flotador2, INPUT);
  pinMode(bombaAgua, OUTPUT);
  digitalWrite(bombaAgua, HIGH);

}

void loop() {
  if (digitalRead(flotador1) == LOW && digitalRead(flotador2) == LOW) {
    digitalWrite(bombaAgua, LOW);
  }else{
    digitalWrite(bombaAgua, HIGH);
  }
  delay(100);

}
