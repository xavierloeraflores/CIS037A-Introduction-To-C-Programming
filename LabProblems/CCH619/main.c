
/* 
 * 6.19
 * Dice Rolling
 * Author: Xavier Loera Flores
 * 4/11/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int dice1, dice2, sum;
    int total[11];
    dice1=rand()%6+1;
    dice2=rand()%6+1;
    sum = dice1 + dice2;
    printf("Example:\nDice 1:%d\nDice 2:%d\nSum: %d\n",dice1,dice2,sum);
    
    for(int i = 1; i<=36000;i++){
    dice1=rand()%6+1;
    dice2=rand()%6+1;
    sum = dice1 + dice2;
    total[sum-1]++;
    }
    printf("\nTotals After 36,000 Tries\nSum\tTotal\n");
    for(int j= 1; j<=11; j++)
        printf("%d\t%d\n",j+1,total[j]);
    printf("7 was rolled about 1/6 of the time:%.2f",(double)total[7]/36000);
    return (EXIT_SUCCESS);
}

