void setup(){
  pinMode(A0,INPUT);                 
  pinMode(13,OUTPUT);               
  Serial.begin(9600);               
} 
 
void loop(){
  int valorLDR = analogRead(A0);                
     
    if( valorLDR <= 250 ) 
    {
      digitalWrite(13, HIGH);
      Serial.print("LED ON ");
      Serial.println(valorLDR);
      delay(500);
    }
  
    else
    {
      digitalWrite(13, LOW);
      Serial.println("LED OFF");
      Serial.println(valorLDR);
      delay(500);
    }
  } 