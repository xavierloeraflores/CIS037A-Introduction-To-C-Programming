
/* 
 * 5.39
 * Recursive Greatest Common Divisor
 * Author: Xavier Loera Flores
 * 3/7/2018
 */

#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y);
int main(int argc, char** argv) {
    int x,y;
    //Input 2 Numbers
    printf("%s","Enter a number:");
    scanf("%d",&x);
    printf("%s","Enter a number:");
    scanf("%d",&y);
    //Call GCD Function
    printf("GCD: %d",gcd(x,y));
    return (EXIT_SUCCESS);
}
int gcd(int x, int y){
    if(y==0)
        return x;
    return gcd(y,x%y);//Recursion
}
