#include "tropisticAgent.h"

tropistAgent::tropisticAgent(int r){
    setRange(r);
}

void tropisticAgent::setState(){

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
    setRange()
  }
  else{
    return m;
  }

}

float tropisticAgent::calcTDS(float t){

}

float tropisticAgent::sendCalculation(float c){
  
}