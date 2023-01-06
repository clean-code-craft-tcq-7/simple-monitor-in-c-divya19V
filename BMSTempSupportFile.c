#include "BatteryManagementSystemSupportFile.h"

bool batteryTemperatureCheck(float temperature) {
  
  if (temperature < TEMP_MIN_LIMIT) {
    printStatementsIndex1.row = 0;
    printStatementsIndex1.col = 0;      
    return FALSE;
  }
  else if (temperature > TEMP_MAX_LIMIT) {  
     printStatementsIndex1.row = 0;
     printStatementsIndex1.col = 4; 
     return FALSE;
  }
  else {
    if (temperature <= TEMP_MIN_LIMIT+TEMP_TOLERANCE_UPRLIMIT && temperature >= TEMP_MIN_LIMIT) [
       printStatementsIndex1.row = 0;
       printStatementsIndex1.col = 1;
    }else if (temperature >= TEMP_MAX_LIMIT-TEMP_TOLERANCE_UPRLIMIT && temperature <= TEMP_MAX_LIMIT) {
      printStatementsIndex1.row = 0;
      printStatementsIndex1.col = 3;
    }else {
      printStatementsIndex = 2;
      printStatementsIndex1.row = 0;
      printStatementsIndex1.col = 2;
    }
      return TRUE;
  }
}
