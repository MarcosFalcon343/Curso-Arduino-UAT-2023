const int ledPin = 13;
const int digitalPin = 6;
const int analogPin = A0;

int digitalVal;
int analogVal; 

void setup(){
 	Serial.begin(9600);
 	
 	pinMode(ledPin, OUTPUT);
 	pinMode(digitalPin, INPUT);
 	
 	Serial.println(F("Flame Sensor Initialized"));
}

void loop(){
 	readFlameSensor();
 	delay(500);
}

void readFlameSensor(){
 			// Read the digital interface
 	digitalVal = digitalRead(digitalPin);
 	if (digitalVal == HIGH){
 			digitalWrite(ledPin, HIGH);
 			Serial.println(F(" 			-> Flame detected"));
 	}else{
 			digitalWrite(ledPin, LOW); 
 	}

 	// Read the analog interface
 	analogVal = analogRead(analogPin);
 	Serial.print(F("Sensor Value "));Serial.println(analogVal);
}

