#Taller Makers night
int ledPin = 9;      // LED conecado al Pin digital #9
int analogPin = 3;   // Porenciometro conectado al pin anag. #3
int val = 0;         // Variable para almacenar la lectura del potenciometro

void setup()
{
  pinMode(ledPin, OUTPUT);   // establecemos el pin "ledPIN" en salida
}

void loop()
{
  val = analogRead(analogPin);   // leemos el potenciometro
  analogWrite(ledPin, val / 4);  // los valores en analogRead van de 0-1023 , en analogWrite van de 0-255
}
