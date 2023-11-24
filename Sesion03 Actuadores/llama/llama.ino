#define electroValvula 9
#define llama 8
void setup() {
  pinMode(electroValvula, OUTPUT);
  pinMode(llama, INPUT);
  digitalWrite(electroValvula, HIGH);
}

void loop() {
  if(digitalRead(llama) == HIGH){
    digitalWrite(electroValvula, LOW);
    delay(2000);
  }else{
    digitalWrite(electroValvula, HIGH);
  }

}
