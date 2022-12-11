#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  if(batteryTemperatureCheck(temperature) && batterySOCCheck(soc) && batteryChargerateCheck(chargeRate))
    return 1;
  else
    return 0;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
