

/* 
 * 6.36
 * Printing a String Backwards
 * Author: Xavier Loera Flores
 * 4/29/2018
 */

#include <stdio.h>
#include <stdlib.h>


void stringreverse(int counter, char stringReverse[]);
int main(int argc, char** argv) {
    printf("Please enter a string:\n");
    char stringReverse[100];
    int counter;
    counter = 0;
    scanf("%s", stringReverse);
    printf("\n");
    stringreverse(counter, stringReverse);
    return (EXIT_SUCCESS);
}

void stringreverse(int counter, char stringReverse[]){
    if (stringReverse[counter+1] != '\0') 
        stringreverse(counter+1, stringReverse);
    printf("%c",stringReverse[counter]);
}