#define RED 11
#define ORG 12
#define GRN 13

#define SOUND A1

void setup() {
   Serial.begin(9600);
   pinMode(GRN, OUTPUT);
   pinMode(ORG, OUTPUT);
   pinMode(RED, OUTPUT);
   pinMode(SOUND, INPUT);
}

void loop() {
   Serial.println(analogRead(SOUND));
  
   if(analogRead(SOUND) < 50) {
      digitalWrite(GRN, HIGH);
      digitalWrite(ORG, LOW);
      digitalWrite(RED, LOW);
   }

   if(analogRead(SOUND) > 50 and analogRead(SOUND) < 100) {
      digitalWrite(GRN, HIGH);
      digitalWrite(ORG, HIGH);
      digitalWrite(RED, LOW);
   }

   if(analogRead(SOUND) > 100) {
      digitalWrite(GRN, HIGH);
      digitalWrite(ORG, HIGH);
      digitalWrite(RED, HIGH);
   }

      delay(50);
}