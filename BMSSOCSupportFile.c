#include "BatteryManagementSystemSupportFile.h"

bool batterySOCCheck(float soc) {
  if(soc < SOC_MIN_LIMIT) {
     printStatementsIndex = 1;
    return FALSE;
  }
  else if (soc > SOC_MAX_LIMIT) {
     printStatementsIndex = 5;
    return FALSE;
  }
  else {
      if(soc >= SOC_MIN_LIMIT && soc <= SOC_MIN_LIMIT+SOC_TOLERANCE_UPRLIMIT) 
         printStatementsIndex = 2;
      else if(soc <= SOC_MAX_LIMIT && soc >= SOC_MAX_LIMIT-SOC_TOLERANCE_UPRLIMIT)
         printStatementsIndex = 4;
      else
         printStatementsIndex = 3;
    return TRUE;
  }
}
