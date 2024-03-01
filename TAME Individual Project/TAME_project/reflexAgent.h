#ifndef __REFLEX_AGENT_H
#define __REFLEX_AGENT_H

#include <Arduino.h>
#include "tropisticAgent.h"


class reflexAgent{
 

  public:
     reflexAgent();
    ~reflexAgent() {}
    void setState(float);
    void requestMeasurement();
    void receiveMeasurement(float m);
    float getMeasurement();
    String evaluateSample(float m);
    String evaluateAssertion();
   
  private:
    String assertion;
    float measurement;
    int state = 1;

};

#endif