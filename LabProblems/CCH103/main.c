/* 
 * 10.3
 * 
 * Author: Xavier Loera Flores
 * 5/9/2018
 */

#include <stdio.h>
#include <stdlib.h>


    struct part {
            unsigned int partNumber;
            char partName[25]; 
                };
int main(int argc, char** argv) {

                
 typedef struct part Part;
 Part a, b[ 10 ], *ptr;
 Part c;
 char x[]={'d', 'a','n','k'};
 c.partNumber=10;
 printf("Please enter a part Number:");
 scanf( "%d", &a.partNumber);
 printf("\nPlease enter a part Name:");
 scanf("%s",a.partName);
 b[3]=a;
 b[4]=c;
 ptr = b;
 printf( "\n%d %s\n", ( ptr + 3 )->partNumber, ( ptr + 3 )->partName);
    return (EXIT_SUCCESS);
}

