#include "tropisticAgent.h"
#include "reflexAgent.h"


tropisticAgent a;
reflexAgent b;



void setup() {
  Serial.begin(9600);
  while (!Serial);
  delay(4000);    
}


void loop() {
  float sensorReading = analogRead(A0);
  int x = random(0,20001);
  a.setState(sensorReading, x);
  b.setState(sensorReading);
  delay(500);
}
