/* 
 * 4.28
 * Calculating Weekly Pay
 * Author: Xavier Loera Flores
 * 2/21/2018
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
    //Initialize Variables
    double weekly,quantity, payrate;
    char code;
    
    puts("Enter Paycode(0 to end):");
    while ( ( code = getchar() ) != '0' ){//Get PayCode 
        switch ( code ) {

            case '1'://Managers
                puts("Manger");
                puts("Enter Weekly Pay");
                scanf("%lf",&weekly);//Weekly Salary
                printf("WEEKLY PAY:$%.2f\n\n",weekly);
                puts("Enter Paycode(0 to end):");
                break;

            case '2'://Hourly Workers            
                puts("Hourly Worker");
                puts("Enter Hourly Rate");
                scanf("%lf",&payrate);//Wage
                puts("Enter Hours Worked");
                scanf("%lf",&quantity);//Hours
                weekly = quantity * payrate;//Calculating Weekly Pay
                if (quantity>40){
                    weekly +=(quantity - 40)*.5;
                }
                printf("WEEKLY PAY:$%.2f\n\n",weekly);
                puts("Enter Paycode(0 to end):");
                break;
                
            case '3'://Commission Workers
                puts("Commission Workers");
                puts("Enter Gross Weekly Sales");
                scanf("%lf",&weekly);//Weekly Sales
                weekly = weekly*.057 + 250;//Calculating Weekly Pay
                printf("WEEKLY PAY:$%.2f\n\n",weekly);
                puts("Enter Paycode(0 to end):");
                break;
                
            case '4'://Piece Workers
                puts("Piece Workers");
                puts("Enter Price Per Item");
                scanf("%lf",&payrate);//Item Price
                puts("Enter Number of Items sold");
                scanf("%lf",&quantity);//Number Sold
                weekly = payrate * quantity;//Calculating Weekly Pay
                printf("WEEKLY PAY:$%.2f\n\n",weekly);
                puts("Enter Paycode(0 to end):");
                break;
        }
        }
    return (EXIT_SUCCESS);

}


