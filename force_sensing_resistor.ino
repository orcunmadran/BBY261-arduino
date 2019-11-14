/*
FSR - Force Sensing Resistor
Kuvvete duyarlı direnç örneği
*/

int basinc;

void setup() {
  Serial.begin(9600);
}

void loop() {
  basinc = analogRead(0);
  Serial.println(basinc);
}
