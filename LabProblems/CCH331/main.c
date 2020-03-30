/* 
 * 3.31
 * Another Dangling Else Problem
 * Author: Xavier Loera Flores
 * 2/14/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
/* Original:
    if(y==8)
    if(5==5)
    puts("@@@@@");
    else
    puts("#####");
    puts("$$$$$$");
    puts("&&&&&");
 Assuming x=5, y=8
*/
    //Initializes values
    int x=5;
    int y=8;
/*
@@@@@
$$$$$
&&&&&
 */    
    if(y==8){
        if(x==5)
        puts("@@@@@");
    }
    else{
        puts("#####");
    }
    puts("$$$$$$");
    puts("&&&&&");
    puts("\n");

/*
 @@@@@
 */  
    if(y==8){
        if(x==5)
        puts("@@@@@");
    }
    else{
        puts("#####");
        puts("$$$$$$");
        puts("&&&&&");
    }
    puts("\n");
/*
 @@@@@
 &&&&&
 */ 
    if(y==8){
    if(x==5)
    puts("@@@@@");}
    else{
        puts("#####");
        puts("$$$$$$");
    }
    puts("&&&&&"); 
    puts("\n");
/*
Assuming y=7
#####
$$$$$
&&&&& 
 */  
    //Resets y to equal 7
    y=7;
    printf("y = %d\n\n",y);
    
    if(y==8){
        if(x==5)
        puts("@@@@@");
    }
    else{
        puts("#####");
        puts("$$$$$$");
        puts("&&&&&");
    }
}
