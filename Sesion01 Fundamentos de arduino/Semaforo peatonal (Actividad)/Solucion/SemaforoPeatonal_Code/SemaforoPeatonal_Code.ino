#define ledRojoS1 13
#define ledAmarrilloS1 12
#define ledVerdeS1 11

#define ledRojoS2 7
#define ledAmarrilloS2 6
#define ledVerdeS2 5

void setup() {
  pinMode(ledRojoS1, OUTPUT);
  pinMode(ledAmarrilloS1, OUTPUT);
  pinMode(ledVerdeS1, OUTPUT);

  pinMode(ledRojoS2, OUTPUT);
  pinMode(ledAmarrilloS2, OUTPUT);
  pinMode(ledVerdeS2, OUTPUT);
}

void loop() {
  //SEMAFORO 1
  digitalWrite(ledRojoS1, HIGH);
  digitalWrite(ledAmarrilloS1,LOW);
  digitalWrite(ledVerdeS1,LOW);

  //SEMAFORO 2
  digitalWrite(ledRojoS2, LOW);
  digitalWrite(ledAmarrilloS2,LOW);
  digitalWrite(ledVerdeS2,HIGH);

  delay(8000);
  //SEMFORO2
  digitalWrite(ledVerdeS2,LOW);
  digitalWrite(ledAmarrilloS2,HIGH);
  delay(2000);

  //SEMAFORO 1
  digitalWrite(ledRojoS1, LOW);
  digitalWrite(ledAmarrilloS1,LOW);
  digitalWrite(ledVerdeS1,HIGH);

  //SEMAFORO 2
  digitalWrite(ledRojoS2, HIGH);
  digitalWrite(ledAmarrilloS2,LOW);
  digitalWrite(ledVerdeS2,LOW);

  delay(8000);
  //SEMFORO1
  digitalWrite(ledVerdeS1,LOW);
  digitalWrite(ledAmarrilloS1,HIGH);
  delay(2000);
}
