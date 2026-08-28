const int pinRojo = 8;
const int pinAmarillo = 9;
const int pinVerde = 10;
int espera = 1000;

void setup() {
  pinMode(pinRojo, OUTPUT);
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
}

void loop() {
  digitalWrite(pinRojo, HIGH);
  delay(espera);
  digitalWrite(pinRojo, LOW);

  digitalWrite(pinAmarillo, HIGH);
  delay(espera);
  digitalWrite(pinAmarillo, LOW);

  digitalWrite(pinVerde, HIGH);
  delay(espera);
  digitalWrite(pinVerde, LOW);
}