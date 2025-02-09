const int LED = 13;
const int LDR = A0;
const int valor = 200;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
}

void loop() {
  int input = analogRead(LDR);
  if(input < valor){
    digitalWrite(LED, HIGH);
    delay(50);
    digitalWrite(LED, LOW);
    delay(50);
  } else {
    digitalWrite(LED, LOW);
  }
}
