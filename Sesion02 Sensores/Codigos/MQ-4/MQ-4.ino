#define MQ4pin (0) 
float sensorValue; //variable para guardar el valor analógico del sensor

void setup()
{
  Serial.begin(9600); // Inicializamos el puerto serial a 9600
  Serial.println("El sensor de gas se esta pre-calentando");
  delay(20000); // Espera a que el sensor se caliente durante 20 segundos
}

void loop()
{
  sensorValue = analogRead(MQ4pin); // Leer la entrada analógica 0
  Serial.print("Valor detectado por el sensor: ");
  Serial.print(sensorValue);
  if(sensorValue > 300)
  {
   Serial.print(" | Se ha detectado gas!");
  }
  Serial.println("");
  delay(2000); // espera por 2 segundos para la siguiente lectura
}