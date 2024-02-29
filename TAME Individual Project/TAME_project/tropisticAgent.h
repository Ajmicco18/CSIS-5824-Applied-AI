#ifndef __TROPISTIC_AGENT_H
#define __TROPISTIC_AGENT_H


class tropisticAgent{
  tropisticAgent();

  public:
    //void setState(tropisticAgent a);
    float getMeasurement();
    void setMeasurement(float m);
    int getRange();
    void setRange(int r);
    float checkError(float e,  tropisticAgent a);
    float calcTDS(float t);
    float sendCalculation(float c);

  private:
    float calculation;
    int range;
    float measurement;
    int state = 1;

};

#endif
//Class diagram is just a straight line between two diagrams (Associative Relationship)