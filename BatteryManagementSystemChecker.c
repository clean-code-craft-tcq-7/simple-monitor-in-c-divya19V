#include "BatteryManagementSystemChecked.h"
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  if(!batteryTemperatureCheck(temperature)) {
      if(!batterySOCCheck(soc)) {
          if(!batteryChargerateCheck(chargeRate)) {
              return 0;
          }
      }
  }
  return 1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  
  printBatteryTemperatureCheckStatus(50);
  printBatterySOCCheckStatus(85);
  printBatteryChargeRateCheckStatus(0);
  assert(!batteryIsOk(50, 85, 0));
}
