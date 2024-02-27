#ifndef __TROPISTIC_AGENT_H
#define __TROPISTIC_AGENT_H
#include <Arduino.h>

class tropisticAgent{
  tropisticAgent(int r)

  public:
    void setState();
    float getMeasurement();
    void setMeasurement(float m);
    int getRange();
    void setRange(int r);
    float checkError(float e);
    float calcTDS(float t);
    float sendCalculation(float c);

  private:
    float calculation;
    int range;
    float measurement;

};