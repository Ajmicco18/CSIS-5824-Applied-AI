#include "reflexAgent.h"
#include <Arduino.h>

reflexAgent::reflexAgent(){}

/*void reflexAgent::setState(reflexAgent a){
  while(true){
    switch (state){
      case 1:
        a.requestMeasurement();
        state = 2;
        break;
      case 2:
        a.receiveMeasurement();
        state = 3;
        break;
      case 3:
        a.evaluateSample();
        state = 4;
        break;
      case 4:
        a.evaluateAssertion();
        state = 2;
        break;
    }
  } 
}
*/
void reflexAgent::requestMeasurement(){

}

void reflexAgent::receiveMeasurement(float m){
  measurement = m;
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

String reflexAgent::evaluateAssertion(String a){
  return a;
}