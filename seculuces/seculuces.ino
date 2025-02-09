int input;

void setup() {
  int a = 0;
  for (a = 6; a < 14; a++)
    pinMode(a, OUTPUT);
}

void loop() {
  int b = 0;
  for(b = 6; b < 14; b++){
    digitalWrite(b, HIGH);
    delay(50);
    digitalWrite(b, LOW);
    delay(50);
  }
  for(b = 13; b > 6; b--){
    digitalWrite(b, HIGH);
    delay(10);
    digitalWrite(b, LOW);
    delay(10);
  }
}
