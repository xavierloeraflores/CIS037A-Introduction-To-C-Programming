
/* 
 * 4.31
 * Calculating Weekly Pay
 * Author: Xavier Loera Flores
 * 2/28/2018
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    puts("Enter a Diamond size");
    scanf("%d",&n);//Diamond Size
    int space = n-1;
    
    for ( int i = 1; i<=2*n-1;i++){//Row Number
        for(int b=0; b<space; b++){//Spaces
            printf(" ");
        }
        
        for(int k = 1;k<=i*2-1;k++ ){//Stars
            if (i<=n)
                printf("*");
        }
        
        for(int h = 1;h<=(2*n-i)*2-1;h++ ){//Stars
            if(i>n)
            printf("*");
        }
        
        printf("\n");//new Line
        
        space--;//Space Decrement
        if(i>=n)//Space Increment
            space+=2;
        
            
    }
    return (EXIT_SUCCESS);
}

