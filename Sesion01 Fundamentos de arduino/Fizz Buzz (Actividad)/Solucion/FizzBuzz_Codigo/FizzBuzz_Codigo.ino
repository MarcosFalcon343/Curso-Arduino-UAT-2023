#define ledFizz 13
#define ledBuzz 12
#define ledNot 11

int numero;

void setup()
{
  Serial.begin(9600);
  pinMode(ledFizz, OUTPUT);
  pinMode(ledBuzz, OUTPUT);
  pinMode(ledNot, OUTPUT);
}

void loop()
{
  Serial.println("Ingrese un numero positivo");
  delay(5000);
  if(Serial.available()){
    numero = Serial.readString().toInt();
    for(int i = 1; i <= numero; i++){
      if(i % 3 == 0 && i % 5 == 0){
        Serial.println("FIZZBUZZ");
        digitalWrite(ledFizz, HIGH);
        digitalWrite(ledBuzz, HIGH);
      }else if(i % 3 == 0){
        Serial.println("FIZZ");
        digitalWrite(ledFizz, HIGH);
      }else if(i % 5 == 0){
        Serial.println("BUZZ");
        digitalWrite(ledBuzz, HIGH);
      }else{
        Serial.println(i);
        digitalWrite(ledNot,HIGH);
      }

      delay(1000);
      digitalWrite(ledBuzz,LOW);
      digitalWrite(ledFizz,LOW);
      digitalWrite(ledNot,LOW);
    }
  }
  delay(5000);
}