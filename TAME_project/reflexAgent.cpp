#include "reflexAgent.h"

reflexAgent::reflexAgent(float r, string a){
    measurement = r;
    assertion = a;
}

void reflexAgent::setState(){

}

void reflexAgent::requestMeasurement(){

}

void reflexAgent::receiveMeasurement(float m){
  measurement = m;
}

string reflexAgent::evaluateSample(float s){

}

string reflexAgent::evaluateAssertion(string a){
  
}