#include "tropisticAgent.h"
#include <Arduino.h>

tropisticAgent::tropisticAgent(){}

void tropisticAgent::setState(tropisticAgent a){
  while(true){
    switch (state){
      case 1:
        a.setRange();
        state = 2;
        break;
      case 2:
        a.setMeasurement();
        state = 3;
        break;
      case 3:
        a.checkError();
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
      state = 2;
}

float tropisticAgent::checkError(float m, tropisticAgent a){
  if (m > 20000 || m < 0){
    state = 1;
    a.setRange(m);
  }
  else{
    return m;
  }
}

float tropisticAgent::calcTDS(float t){
  calculation = t / 2;
  return calculation;

}

float tropisticAgent::sendCalculation(float c){
  
}