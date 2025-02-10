int pinSonido = 12;
int cantTonos = 10;
int tonos[] = {261, 349, 392, 440, 392, 330, -10, 261, 349, 392, -10, -10, 261, 349, 392, 440, 392, 330, -10, 330, 349, 330, 261, 261};

void setup() {
  for(int i = 0; i < cantTonos; i++){
    tone(pinSonido, tonos[i]);
    delay(500);
  }
  noTone(pinSonido);
}

void loop() {
}
