//#include "reflexAgent.h"
#include "tropisticAgent.h"
#include "reflexAgent.h"
#include "VernierLib.h" 

VernierLib Vernier;
tropisticAgent a
reflexAgent b;



void setup() {
  Serial.begin(9600);
  while (!Serial);
  delay(4000);    
  Vernier.autoID()
}


void loop() {
  float sensorReading = Vernier.readSensor(); 
  x = rand(0,20001)
  a.setSate(a,b,x,sensorReading)
  Serial.println(Vernier.sensorUnits()); 
  delay(500);
}
