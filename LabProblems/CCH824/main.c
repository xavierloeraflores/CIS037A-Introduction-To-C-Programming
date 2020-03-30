/* 
 * 8.24
 * (Strings Ending with "ed") 
 * Author: Xavier Loera Flores
 * 4/29/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) { 
    int length;
    char string[20][20]; 
        printf( "Enter strings: ");
    for( int i = 0; i <5; ++i ) { 
        puts("");
        scanf( "%s", &string[ i ][ 0] );
    } 
    printf( "\nStrings:\n");
    for( int i = 0; i < 5; ++i ) {
        length = strlen(string[i]);
        if( 'd'== string[ i][ length-1] && 'e'== string[i][length-2] ) {
            printf( "%s\n", &string[ i ][0 ] );
        } 
    }
    return (EXIT_SUCCESS);
}