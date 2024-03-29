/*
  Led yakıp söndürme - Ardustar V2
*/

const int arduLed1 = 4; //Ardustar Led 1
const int arduLed2 = 5; //Ardustar Led 2
const int arduLed3 = 6; //Ardustar Led 3
const int arduLed4 = 7; //Ardustar Led 4


void setup() {
  // Ledlerin bir çıkış olarak tanımlanması
  pinMode(arduLed1, OUTPUT);
  pinMode(arduLed2, OUTPUT);
  pinMode(arduLed3, OUTPUT);
  pinMode(arduLed4, OUTPUT);
  
}

void loop() {
  
  digitalWrite(arduLed1, HIGH);   // Led 1 yan
  delay(1000);                       
  digitalWrite(arduLed2, HIGH);   // Led 2 yan
  delay(1000);                      
  digitalWrite(arduLed3, HIGH);   // Led 3 yan
  delay(1000);                       
  digitalWrite(arduLed4, HIGH);   // Led 4 yan
  delay(1000);                    

  digitalWrite(arduLed1, LOW);   // Led 1 sön
  delay(100);                       
  digitalWrite(arduLed2, LOW);   // Led 2 yan
  delay(100);                       
  digitalWrite(arduLed3, LOW);   // Led 3 yan
  delay(100);                       
  digitalWrite(arduLed4, LOW);   // Led 4 yan
  delay(100);                       

}
