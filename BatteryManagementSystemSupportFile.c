#include <stdio.h>

#define TEMP_MIN_LIMIT 0
#define TEMP_MAX_LIMIT 45
#define SOC_MIN_LIMIT 20
#define SOC_MAX_LIMIT 80
#define CHARGERATE_MAX_LIMIT 0.8

#define TEMP_TOLERANCE_UPRLIMIT (TEMP_MAX_LIMIT*0.05)
#define SOC_TOLERANCE_UPRLIMIT (SOC_MAX_LIMIT*0.05)
#define CHARGERATE_TOLERANCE_UPRLIMIT (CHARGERATE_MAX_LIMIT*0.05)

#define TRUE 1
#define FALSE 0

bool TEMPERATUREWARNINGSET 0
bool SOCWARNINGSET 0
bool CHARGERATEWARNINGSET 0

  
bool batteryTemperatureCheckForError(float temperature) {
  if (temperature < TEMP_MIN_LIMIT || temperature > TEMP_MAX_LIMIT) 
     return FALSE;
  else 
    return TRUE;
}

bool batteryTemperatureCheckForWarnings(float temperature) {
  if ((temperature <= TEMP_MIN_LIMIT+TEMP_TOLERANCE_UPRLIMIT && temperature >= TEMP_MIN_LIMIT) || 
      (temperature >= TEMP_MAX_LIMIT-TEMP_TOLERANCE_UPRLIMIT && temperature <= TEMP_MAX_LIMIT))
    TEMPERATUREWARNINGSET = TRUE;
}

bool batterySOCCheckForError(float soc) {
  if(soc < SOC_MIN_LIMIT || soc > SOC_MAX_LIMIT) 
    return FALSE;
  else
    return TRUE;
}

bool batterySOCCheckForWarnings(float soc) {
  if((soc >= SOC_MIN_LIMIT && soc <= SOC_MIN_LIMIT+SOC_TOLERANCE_UPRLIMIT) ||
    (soc <= SOC_MAX_LIMIT && soc >= SOC_MAX_LIMIT-SOC_TOLERANCE_UPRLIMIT))
    SOC_TOLERANCE_UPRLIMIT = TRUE;
}


bool batteryChargerateCheckForError(float chargeRate) {
  if(chargeRate > CHARGERATE_MAX_LIMIT)
    return FALSE;
  else
    return TRUE;
}

bool batteryChargerateCheckForWarnings(float chargeRate) {
  if(chargeRate <= CHARGERATE_MAX_LIMIT && chargeRate >= CHARGERATE_MAX_LIMIT-CHARGERATE_TOLERANCE_UPRLIMIT)
   CHARGERATEWARNINGSET = TRUE;
}
