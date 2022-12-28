#include "BatteryManagementSystemSupportFile.c"

bool batteryChargerateCheck(float chargeRate) {
  if(chargeRate > CHARGERATE_MAX_LIMIT) {
    printStatementsIndex = 5;
    return FALSE;
  } else {
    if(chargeRate <= CHARGERATE_MAX_LIMIT && chargeRate >= CHARGERATE_MAX_LIMIT-CHARGERATE_TOLERANCE_UPRLIMIT)
      printStatementsIndex = 5;
    else
      printStatementsIndex = 4;
    
    return TRUE;
  }
}
  
