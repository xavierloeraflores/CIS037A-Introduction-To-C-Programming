
/* 
 * 7.30
 * Calculating Circle Circumference, Circle Area or Sphere Volume Using Function Pointers
 * Author: Xavier Loera Flores
 * 4/25/2018
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void circumference(double radius);
void area(double radius);
void volume(double radius);

int main(int argc, char** argv) {
    void(*func[3])(double)={circumference, area, volume};
    int choice =0;
    double radius;
    while(choice!=-1){
        printf("\nSelect Calculation(-1 to end):\n"
                "1-Circumference\n1-Area\n3-Volume");
        scanf("%d", &choice);
        if(choice==-1)
            break;
        printf("Enter radius:\n");
        scanf("%lf", &radius);
        (*func[choice-1])(radius);
    }
    return (EXIT_SUCCESS);
}
void circumference(double radius){
    printf("Radius: %.2f\n",radius);
    printf("Circumference: %.2f\n", 2.0* M_PI *radius);

}
void area(double radius){
    printf("Radius: %.2f\n",radius);
    printf("Area: %.2f\n", M_PI *radius*radius);

}
void volume(double radius){
    printf("Radius: %.2f\n",radius);     
    printf("Volume: %.2f\n", (4.0/3.0)* M_PI *radius*radius*radius);

}



