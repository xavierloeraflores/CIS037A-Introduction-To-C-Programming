/* 
 * 12.8
 * Inserting into an Ordered Lists
 * Author: Xavier Loera Flores
 * 5/22/2018
 */
#include <stdio.h>
#include <stdlib.h>



struct numlist
{
    int data;
    struct numlist *next;
};

    typedef struct numlist NumNode;
    typedef NumNode *NumNodePtr;

    void insert( NumNodePtr *sPtr, int value );
    void printList( NumNodePtr currentPtr );
    double getavg( NumNodePtr currentPtr );
    int getsum( NumNodePtr currentPtr );
int main(int argc, char** argv) {
    NumNodePtr numlist1 = NULL;
    int sum;
    double avg;
    for(int i = 0; i<25;i++)
    {
            insert( &numlist1, rand() % 101 );
    }
    printList(numlist1);
    
    printf("SUM:%d\nAVG:%f",getsum(numlist1),getavg(numlist1));
}


void insert( NumNodePtr *sPtr, int value )
{
    NumNodePtr newPtr;
    NumNodePtr previousPtr;
    NumNodePtr currentPtr;

    newPtr = (NumNodePtr)malloc(sizeof(NumNode));

    if (newPtr != NULL)
    {
        newPtr->data = value;
        newPtr->next = NULL;

        previousPtr = NULL;
        currentPtr = *sPtr;

        while (currentPtr != NULL && value > currentPtr->data)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->next;
        }

        if (previousPtr == NULL)
        {
                newPtr->next = *sPtr;
                *sPtr = newPtr;
        }
        else
        {
            previousPtr->next = newPtr;
            newPtr->next = currentPtr;
        }
    }
    else
    {
            printf( "%d not inserted. No memory available.", value );
    }
}
double getavg( NumNodePtr currentPtr )
{
    double avg=0.0;
    int count =0;
        while ( currentPtr != NULL )
        {
            avg+= currentPtr->data;
            currentPtr = currentPtr->next;
            count++;
        }
    avg=(double)avg/count;
    return avg;
}

int getsum( NumNodePtr currentPtr )
{
    int sum =0;
        while ( currentPtr != NULL )
        {
            sum+= currentPtr->data;
            currentPtr = currentPtr->next;
        }
    return sum;
    
}

void printList( NumNodePtr currentPtr )
{

        while ( currentPtr != NULL )
        {
            printf("%d --> ", currentPtr->data);
            currentPtr = currentPtr->next;
        }
        puts("NULL");  
}