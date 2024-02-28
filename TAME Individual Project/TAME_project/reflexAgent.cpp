#include "reflexAgent.h"
#include "tropistAgent.cpp"

reflexAgent::reflexAgent(float r, string a){
    measurement = r;
    assertion = a;
}

void reflexAgent::setState(){

}

void reflexAgent::requestMeasurement(){
  tropistAgent a; 
  a.setRange();

}

void reflexAgent::receiveMeasurement(float m){
  measurement = m;
}

string reflexAgent::evaluateSample(float s){

}

string reflexAgent::evaluateAssertion(string a){
  
}