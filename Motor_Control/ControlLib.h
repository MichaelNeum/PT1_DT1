#include "MyNames.h"
#include <Arduino.h>

using namespace Constants;
using namespace Datatypes;


class Controler
{
  public:
    float PT1(bool State);
    float DT1(bool State);
  private:
    TimeType _TimeNowPT1;
    TimeType _TimeNowDT1;
};
