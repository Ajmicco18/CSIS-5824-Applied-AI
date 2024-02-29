#include "tropisticAgent.h"
#include "reflexAgent.h"
#include <Arduino.h>

tropisticAgent::tropisticAgent(){}

void tropisticAgent::setState(tropisticAgent a, reflexAgent b, int r, float m){
  while(true){
    switch (state){
      case 1:
        a.setRange(r);
        state = 2;
        break;
      case 2:
        a.setMeasurement(m);
        state = 3;
        break;
      case 3:
        a.checkError(a.getMeasurement());
        state=4;
        break;
      case 4:
        a.calcTDS();
        state = 5;
        break;
      case 5:
        a.sendCalculation();
        state = 1;
        break;
    } 
  }
}

float tropisticAgent::getMeasurement(){
      return measurement;
}

void tropisticAgent::setMeasurement(float m){
      measurement = m;
}

int tropisticAgent::getRange(){
      return range;
}

void tropisticAgent::setRange(int r){
      range = r;
}

float tropisticAgent::checkError(float m, tropisticAgent a){
  if (m > 20000 || m < 0){
    state = 1;
    //Determine where to go when error and how to get there
  }
  else{
    return measurement;
  }
}

void tropisticAgent::calcTDS(float t){
  calculation = t / 2;
}

float tropisticAgent::sendCalculation(){
  return calculation;
}
