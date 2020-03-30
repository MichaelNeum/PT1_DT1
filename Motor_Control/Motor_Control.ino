#include "ControlLib.h"

#define ButtonPin 7
#define OutputPin 6

Controler controler;

void setup() 
{
  pinMode(ButtonPin , INPUT_PULLUP);
  pinMode(OutputPin , OUTPUT);
  
Serial.begin(9600);
}

void loop() 
{
  bool ButtonState = false;
  int PT1Value = 0 , DT1Value = 0;
  ButtonState = !digitalRead(ButtonPin);
  
  PT1Value = (int)controler.PT1(ButtonState);
  DT1Value = (int)controler.DT1(!ButtonState);
  PT1Value = map(PT1Value,0,100,0,255);
  DT1Value = map(DT1Value,0,100,0,255);
  
  analogWrite(OutputPin , PT1Value + DT1Value);
}
