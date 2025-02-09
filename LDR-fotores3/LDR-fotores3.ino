const long A=1000;
const int B=15;
const int ResCal=10;
const int LDR=A0;

int Va;
int il;

void setup() {
  Serial.begin(115200);
}

void loop() {
  Va = analogRead(LDR);

  il = ((long)Va*A*10)/((long)B*ResCal*(1024-Va));

  Serial.println(il);
  delay(1000);
}
