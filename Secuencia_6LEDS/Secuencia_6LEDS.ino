//Usaremos, 6 bombillos LED de a dos por color, 6 resistencias de 220 Ohms, protoboard, arduino UNO y cables puente.

void setup() {
  int Led = 0;
  for (int Led = 4; Led < 10; Led++)
    pinMode(Led, OUTPUT);
}

void loop() {
  //Bloque 1
  
    int paso = 2;
  for(int Led = 4; Led < 7; Led++){
    digitalWrite(Led, HIGH);
    digitalWrite(Led + 2 * paso + 1, HIGH);
    delay(200);
    digitalWrite(Led, LOW);
    digitalWrite(Led + 2 * paso + 1, LOW);
    delay(200);
    paso--;
  }

  //Bloque2
  
  paso=0;
  for(int Led=6; Led>3; Led--){
    digitalWrite(Led, HIGH);
    digitalWrite(Led + 2 * paso + 1, HIGH);
    delay(200);
    digitalWrite(Led, LOW);
    digitalWrite(Led + 2 * paso + 1, LOW);
    delay(200);
    paso++;    
  }

}
