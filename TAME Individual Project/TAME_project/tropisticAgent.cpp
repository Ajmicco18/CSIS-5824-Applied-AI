#include "tropisticAgent.h"
#include "reflexAgent.h"
#include <Arduino.h>

tropisticAgent::tropisticAgent(){}

void tropisticAgent::setState(float m, int r){
  while(true){
    switch (state){
      case 1:
        setRange(r);
        state = 2;
        break;
      case 2:
        setMeasurement(m);
        state = 3;
        break;
      case 3:
        checkError(getMeasurement());
        state=4;
        break;
      case 4:
        calcTDS(m);
        state = 5;
        break;
      case 5:
        sendCalculation();
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

float tropisticAgent::checkError(float m){
  if (m > 20000 || m < 0){
    state = 1;
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
