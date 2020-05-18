#include "Faults.h"

bool OverVoltage(float voltage, int time)
{
  if(voltage>K_UV_MAX && time==20)
  {
    return 1; 
  } 
  else
    return 0;
}

bool UnderVoltage(float voltage, int time)
{
  if(voltage<K_UV_MIN && time==20)
  {
    return 1; 
  } 
  else
    return 0;
}

bool OverFrequency(float Frequency, int time)
{
  if(Frequency>K_UF_MAX && time==20)
  {
    return 1; 
  }
  else
    return 0;
}

bool UnderFrequency(float Frequency, int time)
{
  if(Frequency<K_UF_MIN && time==20)
  {
    return 1; 
  }
  else
    return 0;
}
