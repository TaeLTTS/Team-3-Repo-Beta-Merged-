#ifndef FAULTS_H
#define FAULTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//****Max Min Range****
//Voltage
#define K_UV_MAX 5.0
#define K_UV_MIN 1.0
//Current
#define K_UI_MAX 5.0
#define K_UI_MIN 1.0
//Frequency
#define K_UF_MIN 350.0
#define K_UF_MAX 1000.0

bool OverVoltage(float voltage,int time);
bool UnderVoltage(float voltage,int time);
bool OverCurrent(float current,int time);
bool UnderCurrent(float current,int time);
bool OverFrequency(float frequency,int time);
bool UnderFreqeuncy(float frequency,int time);

#endif
