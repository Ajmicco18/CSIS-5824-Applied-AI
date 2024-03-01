#ifndef __TROPISTIC_AGENT_H
#define __TROPISTIC_AGENT_H


class tropisticAgent{
  

  public:
    tropisticAgent();
    void setState(float m, int r);
    float getMeasurement();
    void setMeasurement(float m);
    int getRange();
    void setRange(int r);
    float checkError(float e);
    void calcTDS(float t);
    float sendCalculation();

  private:
    float calculation;
    int range;
    float measurement;
    int state = 1;

};

#endif