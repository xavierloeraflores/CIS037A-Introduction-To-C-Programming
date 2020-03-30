
/* 
 * 5.35
 * Fibonacci Series
 * Author: Xavier Loera Flores
 * 3/14/2018
 */

#include <stdio.h>
#include <stdlib.h>

long long int fibonacci(unsigned int n);

int main(int argc, char** argv) {
    unsigned int n=1;
    long long int fib=0;//First Fibonacci Number

    
    while(fib>=0){ //Only Prints Positive
        printf("%u.  %lld\n",n,fib);//print number
        n++;     
        fib =  fibonacci(n);//Finds the next Number
    }
    printf("The Max Fibonacci Number has been Printed: %lld",fibonacci(n-1));
    return (EXIT_SUCCESS);
}
long long int fibonacci(unsigned int n){
    int num1=0,num2=1,num3=1;//Default values
    
    for (int i =1; i<n-1;i++){
        num3 =num1 + num2;//Addition of the last 2 values
        num1 =num2;//Revalue
        num2 =num3;//Revalue
    }
    
    return num2;
}
