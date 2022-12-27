#include "BatteryManagementSystemChecked.h"
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  int tempCheckStatus = batteryTemperatureCheck(temperature);
  int batteryCheckStatus = batterySOCCheck(soc);
  int chargerateCheckStatus = batteryChargerateCheck(chargeRate);
  
  int batteryIsOkStatus = ((tempCheckStatus && batteryCheckStatus) && chargerateCheckStatus);
  
  return batteryIsOkStatus;
}

int main() {
  //Positive cases
  assert(batteryIsOk(25, 70, 0.7));
  assert(batteryIsOk(45, 20, 0.1));
  assert(batteryIsOk(0, 21, -9));
  
  //Negative cases
  assert(!batteryIsOk(50, 85, 0));
  assert(!batteryIsOk(100, 18, 0.9));
  assert(!batteryIsOk(-12, 0, 11));
  assert(!batteryIsOk(100, -10, 20));
  
  printBatteryTemperatureCheckStatus(50);
  printBatterySOCCheckStatus(85);
  printBatteryChargeRateCheckStatus(0);
 
 
}
