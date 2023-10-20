int pulsador = 12;
int led = 13;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pulsador, INPUT);
}

void loop()
{
  if(digitalRead(pulsador) == HIGH){
      digitalWrite(led,HIGH);
  }else{
      digitalWrite(led,LOW);
	}
}