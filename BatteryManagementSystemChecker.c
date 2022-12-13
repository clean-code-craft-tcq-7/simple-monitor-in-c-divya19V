#include "BatteryManagementSystemChecked.h"
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  int tempCheckStatus = batteryTemperatureCheck(temperature);
  int batteryCheckStatus = batterySOCCheck(soc);
  int chargerateCheckStatus = batteryChargerateCheck(chargeRate);
  
  int batteryIsOkStatus = ((tempCheckStatus & batteryCheckStatus) & chargerateCheckStatus);
  
  return batteryIsOkStatus;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  
  printBatteryTemperatureCheckStatus(50);
  printBatterySOCCheckStatus(85);
  printBatteryChargeRateCheckStatus(0);
  assert(!batteryIsOk(50, 85, 0));
}
