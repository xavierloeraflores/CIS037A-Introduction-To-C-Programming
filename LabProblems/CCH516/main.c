
/* 
 * 5.16
 * Exponentiation
 * Author: Xavier Loera Flores
 * 3/7/2018
 */
#include <stdio.h>
#include <stdlib.h>

int integerPower(int base, int exponent);

int main(int argc, char** argv) {
    int b,e;
    puts("Enter Base");//Input Base
    scanf("%d",&b);
    
    puts("Enter Exponent");//Input Exponent    
    scanf("%d",&e);
    
    printf("%d^%d=%d\n",b,e,integerPower(b,e));//Test of integerPower        
    return (EXIT_SUCCESS);
}
int integerPower(int base, int exponent){
    int result = 1;//initial value for result
    for (int i = 1; i<= exponent; i++){
        result *= base;
    }
    return result;
}
