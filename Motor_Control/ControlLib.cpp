#include "ControlLib.h"

float Controler::PT1(bool State)
{
  TimeType Time;
  if(!State)
  {
    this->_TimeNowPT1 = millis();
    return 0;
  }
  else Time = millis() - this->_TimeNowPT1;
  return kp*(1-exp(-(Time/T)));
}

float Controler::DT1(bool State)
{
  TimeType Time;
  if(!State)
  {
    this->_TimeNowDT1 = millis();
    return 0;
  }
  else Time = millis() - this->_TimeNowDT1;
  if(millis() > 2*T) return (kd/T)*exp(-(Time/T));
  else return 0;
}
