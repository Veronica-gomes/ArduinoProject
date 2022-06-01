const int pino_led = 12; //pino onde o LED está conectado
const int pino_led2 = 11;

void setup() {
    // configura o pino com o LED como saída 
    pinMode(pino_led, OUTPUT); //pino 12
    pinMode(pino_led2, OUTPUT);
}

void loop () {
  digitalWrite(pino_led, HIGH); // acende o LED
  delay(100); // aguarda 10 milisegundo
  digitalWrite(pino_led, LOW); // apaga o LED
  delay(100); //aguarda 10 milisegundo

  digitalWrite(pino_led2, HIGH); // acende o LED
  delay(100); // aguarda 1 seg
  digitalWrite(pino_led2, LOW); // apaga o LED
  delay(100); //aguarda 1 segundo
  }
