// Carrega a biblioteca externa necessaria
// para o funcionamento do sensor ultrasson

#include<Ultrasonic.h>

// Definimos quais pinos PMW sorao
// utilizados para o TRIGGER e o ECHO

#define pino_trigger 4
#define pino_echo 5

// Inicializamos o sensor com os pinos definidos acima

Ultrasonic ultrasonic(pino_trigger,pino_echo);

void setup()
{
  // Inciamos a comunicacao serial a
  // 9600 baud rate

  Serial.begin(9600);

  // Imprimos mensagem inicial no monitor serial

  Serial.println("Lendo sensor...");
}

void loop()
{
  // Lemos as informacoes do sensor e apresentamos o
  // resultado no monitor serial da IDE em centímetros (cm)

  float cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);

  // Apresentamos a ditancia em centimetros ses casas decimais.

  String cmMsecString = String (cmMsec, 0); // nesta linha pegamos a variavel que armazena os valores em argumento ("0") dizemos que queremos
                                            // centimetros e no segundo
                                            // nenhuma casa decimal (ou seja, numero inteiro apenas). RCosta.)
  String cmMsecStringFinal = cmMsecString+"centimetros";
  // As informacoes adquiridas e já calculadas são mostradas no serial motor
  Serial.print("Distancia: ");
  Serial.println(cmMsecStringFinal);
  delay(500);  
}
