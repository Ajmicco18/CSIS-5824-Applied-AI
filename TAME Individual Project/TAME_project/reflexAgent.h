#ifndef __REFLEX_AGENT_H
#define __REFLEX_AGENT_H
#include <Arduino.h>
#include "tropisticAgent.h"


class reflexAgent{
  reflexAgent();
  ~reflexAgent() {}

  public:
    //void setState(reflexAgent a);
    void requestMeasurement();
    void receiveMeasurement(float m);
    String evaluateSample(float m);
    String evaluateAssertion(String a);
   
  private:
    String assertion;
    float measurement;
    int state = 1;

};

#endif