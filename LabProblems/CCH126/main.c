/* 
 * 12.6
 * Concatenating Lists
 * Author: Xavier Loera Flores
 * 5/16/2018
 */

#include <stdio.h>
#include <stdlib.h>


void concatenate(char* str1, char* str2);
int main(int argc, char** argv) {
    char str1[20];
    char str2[10];
    puts("enter string 1:");
    scanf("%s",&str1);
    puts("enter string 2");
    scanf("%s", &str2);
    concatenate(str1,str2);
    
    printf("%s",str1);

    return (EXIT_SUCCESS);
}
void concatenate(char *str1, char *str2){
    strcat(str1,str2);
}