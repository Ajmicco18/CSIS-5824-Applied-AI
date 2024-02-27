#ifndef __REFLEX_AGENT_H
#define __REFLEX_AGENT_H


class reflexAgent{
  reflexAgent(float r, string a);

  public:
    void setState();
    void requestMeasurement();
    void receiveMeasurement(float m);
    string evaluateSample(float m);
    string evaluateAssertion(string a);
   
  private:
    string assertion;
    float measurement;

};

#endif