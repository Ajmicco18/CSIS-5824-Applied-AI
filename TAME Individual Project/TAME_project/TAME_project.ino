//#include "reflexAgent.h"
#include "tropisticAgent.h"
#include "VernierLib.h" 
VernierLib Vernier;
tropisticAgent a



void setup() {
  Serial.begin(9600);
  while (!Serial);
  delay(4000);    
  Vernier.autoID()
}


void loop() {
  float sensorReading = Vernier.readSensor(); 
  a.setMeasurement(sensorReading);
  Serial.println(Vernier.sensorUnits()); 
  delay(500);
}
