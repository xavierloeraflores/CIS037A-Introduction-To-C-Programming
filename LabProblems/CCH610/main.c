

/* 
 * 6.10
 * Sales Commissions
 * Author: Xavier Loera Flores
 * 4/11/2018
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int salaries[9], count, salary;
    for (int i =0; i<9;i++){
        salaries[i]=0;}
    
    while(salary>=0.0){
        count = 0;
        printf("\nEnter salaries:");
        
        scanf("%d",&salary);
        if (salary<200.0)
            break;
        salary -= 200;
        while (salary>=100){
            salary-=100;
            count++;
            if(count==8)
                break;
        }
        
        salaries[count]++;
    }
    
    for(int i = 0; i <9; i++){
        if (i==8){
            printf("$1000 and over: %d\n",salaries[i]);
            break;
        }
        printf("$%d00-%d99: %d\n",i+2,i+2,salaries[i]);
    }
    
    return (EXIT_SUCCESS);
}

