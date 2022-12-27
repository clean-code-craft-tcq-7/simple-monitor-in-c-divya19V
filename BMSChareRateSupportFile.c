#include "BatteryManagementSystemSupportFile.c"

bool batteryChargerateCheckForError(float chargeRate) {
  if(chargeRate > CHARGERATE_MAX_LIMIT) {
    printStatementsIndex = 5;
    return FALSE;
  } else {
    printStatementsIndex = 4;
    return TRUE;
  }
}

bool batteryChargerateCheckForWarnings(float chargeRate) {
  if(chargeRate <= CHARGERATE_MAX_LIMIT && chargeRate >= CHARGERATE_MAX_LIMIT-CHARGERATE_TOLERANCE_UPRLIMIT)
    printStatementsIndex = 5;
  else
    printStatementsIndex = 4;
}
