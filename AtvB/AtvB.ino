const int potenciometro = 34;
const int ledAzul = 25;

void setup() {
  pinMode(ledAzul, OUTPUT);
}

void loop() {
  int leitura = analogRead(potenciometro);

  int brilho = map(leitura, 0, 4095, 0, 255);

  analogWrite(ledAzul, brilho);

  delay(10);
}