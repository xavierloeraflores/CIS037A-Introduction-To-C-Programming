
/* 
 * 5.34
 * Recursive Exponentiation
 * Author: Xavier Loera Flores
 * 3/7/2018
 */

#include <stdio.h>
#include <stdlib.h>
int power(int base, int exp);
int main(int argc, char** argv) {
    int b,e;
    puts("Enter Base");//Input Base
    scanf("%d",&b);
    
    puts("Enter Exponent");//Input Exponent    
    scanf("%d",&e);
    
    printf("%d^%d=%d\n",b,e,power(b,e));//Test of integerPower        
    
    return (EXIT_SUCCESS);
}
int power(int base, int exp){
    if (exp ==0)
        return 1;//value of base raised to the 0
    return base * power(base, exp-1);//Recursion 
    }
