#include "BatteryManagementSystemSupportFile.h"

bool batteryTemperatureCheck(float temperature) {
  if (temperature < TEMP_MIN_LIMIT) {
      printStatementsIndex = 0;
      return FALSE;
  }
  else if (temperature > TEMP_MAX_LIMIT) {  
     printStatementsIndex = 4;
     return FALSE;
  }
  else {
    if (temperature <= TEMP_MIN_LIMIT+TEMP_TOLERANCE_UPRLIMIT && temperature >= TEMP_MIN_LIMIT)
       printStatementsIndex = 1;  
    else if (temperature >= TEMP_MAX_LIMIT-TEMP_TOLERANCE_UPRLIMIT && temperature <= TEMP_MAX_LIMIT)
      printStatementsIndex = 3;
    else 
      printStatementsIndex = 2;
    
    return TRUE;
  }
}
