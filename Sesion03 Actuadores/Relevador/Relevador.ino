#define pulsador 7
#define relevador 8

void setup(){
  pinMode(pulsador, INPUT);
  pinMode(relevador,OUTPUT);
  digitalWrite(relevador,HIGH);
}

void loop(){
  if(digitalRead(pulsador) == HIGH){
    digitalWrite(relevador,LOW);
  }else{
    digitalWrite(relevador,HIGH);
  }
}