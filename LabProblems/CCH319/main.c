/* 
 * 3.19
 * Interest Calculator
 * Author: Xavier Loera Flores
 * 2/21/2018
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    //creates variables
    float principal, rate, interest;
    int days;
    
    //Do loop Allows user to begin Input
    do {
    puts("Enter Loan Principal(-1 to end):");
    scanf("%f",&principal);

    if (principal!=-1){//skips when user enters -1
        puts("Enter Interest rate:");
        scanf("%f",&rate);//Collects Interest Rate
        
        puts("Enter term of the loan in days:");
        scanf("%d",&days);//Collects Days
        
        interest = (principal *rate*days)/365;//Calculates Interest
        printf("The interest charge is $%.2f\n\n",interest);//Outputs Interest
    }} while (principal !=-1);//checks if -1
    return (EXIT_SUCCESS);
}

