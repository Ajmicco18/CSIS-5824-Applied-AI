#include "reflexAgent.h"
#include "tropisticAgent.h"
#include <Arduino.h>

reflexAgent::reflexAgent(){}

void reflexAgent::setState(float m){
  while(true){
    switch (state){
      case 1:
        requestMeasurement();
        state = 2;
        break;
      case 2:
        receiveMeasurement(m);
        state = 3;
        break;
      case 3:
        evaluateSample(m);
        state = 4;
        break;
      case 4:
        evaluateAssertion();
        state = 2;
        break;
    }
  } 
}

void reflexAgent::requestMeasurement(){
    state = 2;
}

void reflexAgent::receiveMeasurement(float m){
  measurement = m;
}

float reflexAgent::getMeasurement(){
  return measurement;
}

String reflexAgent::evaluateSample(float s){
  if (s < 1000){
    return "The sample is fresh water and is drinkable.";
  }else if (s >= 1000 & s < 1200){
    return "The sample is slightly saline and drinkable.";
  }else if (s > 1200 & s < 3000){
    return "The sample is slightly saline and not drinkable.";
  }else if(s > 3000){
    return "The sample is moderately saline and not drinkable.";
  }
}

String reflexAgent::evaluateAssertion(){
  if (measurement < 1200){
    assertion = "Accepted";
  }else{
    assertion = "Rejected";
  }
  return assertion;
}