#define PIR 10
#define buzzer 9

void setup() {
  pinMode(PIR,INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  if(digitalRead(PIR) == HIGH){
    digitalWrite(buzzer, HIGH);
  }else{
    digitalWrite(buzzer, LOW);
  }

}
