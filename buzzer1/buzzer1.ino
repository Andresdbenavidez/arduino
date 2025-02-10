int pinsonido = 8;
int frecuencia = 320;

void setup() {
}

void loop() {
  tone(pinsonido, frecuencia);
  delay(2000);
  noTone(pinsonido);
  delay(1000);

}
