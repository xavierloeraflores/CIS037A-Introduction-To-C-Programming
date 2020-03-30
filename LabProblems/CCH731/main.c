
/* 
 * 7.31
 * 
 * Author: Xavier Loera Flores
 * 4/20/2018
 */


#include<stdlib.h>
#include <stdio.h>
void addition(double num1, double num2); /* create the functions */
void subtraction(double num1, double num2);
void division(double num1, double num2);
void multiplication(double num1, double num2);
int main(int argc, char** argv){
    int op;
    double num1=0;
    double num2=0;
    void(*func[4])(double, double)={addition, subtraction, division, multiplication};
    

    
    
    do{
    printf("Enter your choice(-1 to end)\n1-add\n2-subtract\n3-multiply\n4-divide\n");
    scanf("%d",&op);

    if( op == -1) 
        break;

    printf("Enter Number1:");
    scanf("%lf", &num1);
    printf("Enter Number2:");
    scanf("%lf", &num2);
        (*func[op-1])(num1, num2);

    }while (op !=-1);
        
        return (EXIT_SUCCESS);
}
void addition(double num1, double num2){
    puts("Addition: ");
    printf("%lf + %lf = %lf\n", num1, num2, num1+num2);}

void subtraction(double num1, double num2){
    puts("Subtraction: ");
    printf("%lf - %lf = %lf\n", num1, num2, num1-num2);
}

void multiplication(double num1, double num2){
    puts("Multiplication: ");
    printf("%lf * %lf = %lf\n", num1, num2, num1*num2);
    }

void division(double num1, double num2){
    puts("Division: ");
    printf("%lf * %lf = %lf\n", num1, num2, num1/num2);
}