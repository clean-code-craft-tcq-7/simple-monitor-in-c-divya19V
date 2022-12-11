#include <stdio.h>
#include <assert.h>

int batteryTemperatureCheck(float temperature) {
  if (temperature < 0 || temperature > 45) 
     return 0;
  else 
    return 1;
}

int batterySOCCheck(float soc) {
  if(soc < 20 || soc > 80) 
    return 0;
  else
    return 1;
}

int batteryChargerateCheck(float chargeRate) {
  if(chargeRate > 0.8)
    return 0;
  else
    return 1;
}

int printBatteryTemperatureCheckStatus(float temperature){
  if(!batteryTemperatureCheck(temperature))
     printf("Temperature out of range!\n"); 
}

int printBatterySOCCheckStatus(float soc){
  if(!batterySOCCheck(soc))
    printf("State of Charge out of range!\n");
}

int printBatteryChargeRateCheckStatus(float chargeRate){
  if(!batteryChargerateCheck(chargeRate))
    printf("Charge Rate out of range!\n");
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
  if(batteryTemperatureCheck && batterySOCCheck && batteryChargerateCheck)
    return 1;
  else
    return 0;
}
int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
