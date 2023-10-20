#define pulsadorEntrada 13
#define pulsadorSalida 12

int contadorEntrada = 0;
int contadorSalida = 0;
int contadorInterior = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(pulsadorEntrada, INPUT);
  pinMode(pulsadorSalida, INPUT);
}

void loop()
{
  if(digitalRead(pulsadorEntrada) == HIGH) contadorEntrada++;
  if(digitalRead(pulsadorSalida) == HIGH && contadorEntrada > contadorSalida) contadorSalida++;
  contadorInterior = contadorEntrada - contadorSalida;

  Serial.println("Personas que han entrado: "+ String(contadorEntrada));
  Serial.println("Personas que han salido: "+ String(contadorSalida));
  Serial.println("Personas en el interior: "+ String(contadorInterior));

  delay(1000);
}