#include <Servo.h>

#define SERVO 6 // Porta Digital 6 PMW

Servo s; // Variável Servo
int pos; // Posição Servo
const int led1 = 12;

void setup ()
{
  s.attach (SERVO);
  Serial.begin(9600);
  s.write(0); // Inicia motor posição zero
  pinMode(led1, OUTPUT);
}

void loop()
{
  for(pos = 0; pos < 180; pos++) // grau da posição
{
  
  s.write(pos);
  digitalWrite(led1, HIGH); 
  delay(10);
  digitalWrite(led1, LOW); 
}

for(pos = 180; pos >= 0; pos--) // grau da posição
{
  s.write(pos);
  
  delay(10);
   
  }
}
