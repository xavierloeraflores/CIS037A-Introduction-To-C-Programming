/* 
 * 2.33
 * Another Dangling Else Problem
 * Author: Xavier Loera Flores
 * 2/14/2018
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    //initializes variables
    float milesPerDay;
    float tolls;
    float costPerGallon;
    float milesPerGallon;
    float parkingFeesPerDay;
    float totalGas;
    float totalCost;
    //Inputs Total Miles Per Day
    puts("Enter your Total miles driven per day.");
    scanf("%f",&milesPerDay);
    //Inputs Cost Per Gallon
    puts("Enter your Cost per gallon of gasoline.");
    scanf("%f",&costPerGallon);
    //Inputs Miles Per Gallon
    puts("Enter your Average miles per gallon.");
    scanf("%f",&milesPerGallon);
    //Inputs Parking Fees Per Day
    puts("Enter your Parking fees per day.");
    scanf("%f",&parkingFeesPerDay);
    //Inputs Tolls per day
    puts("Enter your Tolls per day.");
    scanf("%f",&tolls);
    
    
    //Calculates Gas Cost
    totalGas=costPerGallon*(milesPerDay/milesPerGallon);
    printf("Total Gas Price : $%.2f\n",totalGas);
    //Calculates Total Cost Per Day
    totalCost=totalGas+parkingFeesPerDay+tolls;
    printf("Total Cost Per Day : $%.2f\n",totalCost);
    return (EXIT_SUCCESS);
}

