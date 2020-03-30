
/* 
 * 5.33
 * Guess The Number Modification
 * Author: Xavier Loera Flores
 * 3/14/2018
 */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
void playGuess();
int main(int argc, char** argv) {
    
    char yorn;
    do {
        puts("\nI have a number between 1 and 1000.\nCan You guess My Number?\n"
            "Please Type Your First Guess.");    
        
        playGuess();//Plays Game
        
        puts("Excellent You got the Number!\n"
                "Would You Like to Play again?(y or n)");
        
        scanf("\n%c",&yorn);//User Inputs yes or no
    }while(yorn=='y');//Plays Again if yes
    
    return (EXIT_SUCCESS);
}
void playGuess(){
    int count=0,randnum,guess;
    
    //Generates Random Number
    srand(time(0));
    randnum=rand()%1000+1;
    
    
    do{
        scanf("%d",&guess);//User Inputs a Guess
        count++;//Increments # of Guesses
        
        
        //Checks if Too High or Too Low
        if (guess>randnum)
            puts("Too High. Try Again");
        if(guess<randnum)
            puts("Too Low. Try Again");
        
    }while(guess!=randnum);//Until User Guesses Right
    
    
    //Prints Message Based on the #of Counts
    if (count<10)
        puts("Either You know the Secret or You got Lucky");
    
    if (count==10)
        puts("Ahah! You know the Secret!");
    
    if (count>10)
        puts("You Should be Able to do Better");
    
}

