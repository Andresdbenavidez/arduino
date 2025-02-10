int pinSonido = 12;
int cantTonos = 10;
int tonos[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};

void setup() {
  for(int i = 0; i < cantTonos; i++){
    tone(pinSonido, tonos[i]);
    delay(800);
  }
  noTone(pinSonido);
}

void loop() {
}
