#ifndef __REFLEX_AGENT_H
#define __REFLEX_AGENT_H
#include <Arduino.h>


class reflexAgent{
  reflexAgent();
  ~reflexAgent() {}

  public:
    void setState(tropisticAgent a, reflexAgent b);
    void requestMeasurement(tropisticAgent a);
    void receiveMeasurement(tropisticAgent a);
    float getMeasurement();
    String evaluateSample(float m);
    String evaluateAssertion();
   
  private:
    String assertion;
    float measurement;
    int state = 1;

};

#endif