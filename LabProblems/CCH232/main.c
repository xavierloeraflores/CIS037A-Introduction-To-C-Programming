/* 
 * 2.32 
 * Body Mass Index
 * Author: Xavier Loera Flores
 * Created on January 31, 2018, 11:57 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
   
    //Declares Variables
    int Weight;
    int Height;
    float BMI;
    
    //Orders user to input 
    printf("Please enter your weight in pounds: ");
    scanf("%d",&Weight);
    printf("Pease enter your height in inches: ");
    scanf("%d",&Height);
    
    //Calculates and outputs BMI
    BMI = ((Weight * 703)/pow(Height , 2.0));
    printf("Your BMI is %f \n", BMI);
    //Presents BMI information 
    printf("BMI VALUES\n");
    printf("Underweight: \t\t less than 18.5\n");
    printf("Normal: \t\t between 18.5 and 24.9\n");
    printf("Overweight: \t\t between 15 and 29.9\n");
    printf("Obese: \t\t\t 30 or greater\n");
    
    
    
    
    double x = 5.5;
    printf("%lf",x);
    return (0);
    
}

