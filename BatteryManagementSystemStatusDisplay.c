// This file mainly displays the Battery Status with appropriate messages
#include "BatteryManagementSystemStatusDisplay.h"

void printBatteryTemperatureCheckStatus(float temperature){
  if(!batteryTemperatureCheck(temperature))
     printf("Temperature out of range!\n"); 
}

void printBatterySOCCheckStatus(float soc){
  if(!batterySOCCheck(soc))
    printf("State of Charge out of range!\n");
}

void printBatteryChargeRateCheckStatus(float chargeRate){
  if(!batteryChargerateCheck(chargeRate))
    printf("Charge Rate out of range!\n");
}
