// This file mainly displays the Battery Status with appropriate messages
#include "BatteryManagementSystemStatusDisplay.h"
#include "BatteryManagementSystemSupportFile.h"

/*
void printBatteryTemperatureCheckStatus(float temperature){
  if(!batteryTemperatureCheck(temperature))
     printf("Temperature out of range!\n"); 
}

void printBatterySOCCheckStatus(float soc){
  if(!batterySOCCheck(soc))
    printf("State of Charge out of range!\n");
}

void printBatteryChargeRateCheckStatus(float chargeRate){
  if(!batteryChargerateCheck(chargeRate))
    printf("Charge Rate out of range!\n");
}
*/

int FindTheMessageIndex()
{
    //array of [3][5]
    row = printStatementsIndex;
    col = printStatementsIndex
}

void printBatteryParametersStatus(float temperature, float soc, float chargeRate) {
   bool returnVal= FALSE;
   unsigned int inputParam = 0;
   unsigned int paramValues = 0;
   printf ("You want to see the status for how many parameters?");
   scanf ("%d", &inputParam);
   if (inputParam > 0) {
      printf("Which parameter status would you like to view?");
      printf("1: temperature\t2: SOC\t3: ChareRate\t4: Exit");
      for (int index=1;index<=inputParam;input++) {
          scanf("%d", paramValues);
     
          if(paramValues == 4)
            return 0;
          else if(paramValues == 1) {
            returnVal = batteryTemperatureCheck(temperature);
            
          }else if(paramValues == 2){
          }else {//(paramValues == 3)
          }
       }
   }
 
   
   returnVal = batterySOCCheck(soc);
   returnVal = batteryChargerateCheck(chargeRate);
  
   }
}

