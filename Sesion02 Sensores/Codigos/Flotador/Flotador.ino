int flotador = 6;
int led = 13;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(flotador, INPUT);
}

void loop()
{
  if(digitalRead(flotador) == HIGH){
      digitalWrite(led,HIGH);
  }else{
      digitalWrite(led,LOW);
	}
}