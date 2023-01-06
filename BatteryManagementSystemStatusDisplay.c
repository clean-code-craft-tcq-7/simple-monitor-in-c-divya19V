// This file mainly displays the Battery Status with appropriate messages
#include "BatteryManagementSystemStatusDisplay.h"
#include "BatteryManagementSystemSupportFile.h"

//Function to print message based on the parameter value
void printBatteryParametersStatus(float temperature, float soc, float chargeRate) {
   bool returnVal= FALSE;
   unsigned int inputParam = 0;
   unsigned int paramValues = 0;
   printf ("You want to see the status for how many parameters? \n Input should be in btw 1 to 3:");
   scanf ("%d", &inputParam);
   if (inputParam > 0) {
      printf("Which parameter status would you like to view?");
      printf("1: temperature\t2: SOC\t3: ChareRate\t4: Exit");
      scanf("%d", paramValues);
      for (int index=1;index<=paramValues;input++) {
          if(paramValues >= 4)
            return;
          else if(paramValues == 1) {
            returnVal = batteryTemperatureCheck(temperature);
            printf("%s", printStatements[printStatementsIndex1.row][printStatementsIndex1.col]);
          }else if(paramValues == 2){
            returnVal = batterySOCCheck(soc);
            printf("%s", printStatements[printStatementsIndex1.row][printStatementsIndex1.col]);
          }else {//(paramValues == 3) 
            returnVal = batteryChargerateCheck(chargeRate);
            printf("%s", printStatements[printStatementsIndex1.row][printStatementsIndex1.col]);
          }
       }
    }
  
   }
}

