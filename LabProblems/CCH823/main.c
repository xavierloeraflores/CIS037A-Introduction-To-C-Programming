

/* 
 * 8.23
 * (strings Starting with "b") 
 * Author: Xavier Loera Flores
 * 4/28/2018
 */
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) { 

    char string[20][20]; 
    printf( "Enter strings: ");
    for( int i = 0; i <5; ++i ) {
        puts("");
        scanf( "%s", &string[ i ][ 0] );
    } 
    printf( "\nStrings:\n");
    // loop through strings
    for( int i = 0; i < 5; ++i ) {
        if( 'b'== string[ i ][ 0] ) {
            printf( "%s\n", &string[ i ][ 0] );
        } 
    }
    return (EXIT_SUCCESS);
}
 

    
    
    
    
    
    
    

