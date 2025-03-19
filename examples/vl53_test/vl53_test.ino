#include <MentorBitVL53.h>

MentorBitVL53 miVL53;

void setup() {

  Serial.begin(9600);
  miVL53.begin();

}

void loop() {

  Serial.print("Distancia: ");
  Serial.print(miVL53.leerDistancia());
  Serial.println(" mm");
  delay(250);

}
