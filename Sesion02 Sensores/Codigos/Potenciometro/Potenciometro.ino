
long valor;
 
int LED_1 = 13;
int LED_2 = 12;
int LED_3 = 11;
int LED_4 = 10;
 
void setup() {
  Serial.begin(9600);
 
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
}
 
void loop() {
  valor = analogRead(A0);
 
  Serial.print("El valor es = ");
  Serial.println(valor);
 
  if(valor >= 0 && valor <=255)
  {
      digitalWrite(LED_1, HIGH);
      digitalWrite(LED_2, LOW);
      digitalWrite(LED_3, LOW);
      digitalWrite(LED_4, LOW);
  } 
  
  if (valor >= 256 && valor <=511)
  {
      digitalWrite(LED_1, LOW);
      digitalWrite(LED_2, HIGH);
      digitalWrite(LED_3, LOW);
      digitalWrite(LED_4, LOW);
  }
 
  if (valor >= 512 && valor <=767)
  {
      digitalWrite(LED_1, LOW);
      digitalWrite(LED_2, LOW);
      digitalWrite(LED_3, HIGH);
      digitalWrite(LED_4, LOW);
    }
 
  if (valor >= 768 && valor <=1023)
  {
      digitalWrite(LED_1, LOW);
      digitalWrite(LED_2, LOW);
      digitalWrite(LED_3, LOW);
      digitalWrite(LED_4, HIGH);
   }
}