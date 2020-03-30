/* 
 * 12.7
 * Merging Ordered Lists
 * Author: Xavier Loera Flores
 * 5/16/2018
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
    NumNodePtr merge( NumNodePtr tempPtr1, NumNodePtr tempPtr2 );
    void printList( NumNodePtr currentPtr );
    void instructions();

int main(int argc, char** argv) {
    NumNodePtr numlist1 = NULL;
    NumNodePtr numlist2 = NULL;

    unsigned int choice;
    int item;

    instructions();
    printf("\n?");
    scanf("%u",&choice);

    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            printf("Enter 3 numbers\n");
            scanf("\n%d",&item);
            insert( &numlist1, item );
            printList( numlist1 );
            scanf("\n%d",&item);
            insert( &numlist1, item );
            printList( numlist1 );
            scanf("\n%d",&item);
            insert( &numlist1, item );
            printList( numlist1 );
            
            break;
        case 2:
            printf("Enter 3 numbers\n");
            scanf("\n%d",&item);
            insert( &numlist2, item );
            printList( numlist2 );
            scanf("\n%d",&item);
            insert( &numlist2, item );
            printList( numlist2 );
            scanf("\n%d",&item);
            insert( &numlist2, item );
            printList( numlist2 );
            break;
        case 3:
            printList( numlist1 );
            printList( numlist2 );
            puts("Merged list:");
            printList( merge( numlist1, numlist2 ) );
            
            break;
        }
        printf("\n?");
        scanf("%u",&choice);
    }
}

void instructions()
{
    printf("Enter your choice:\n"
    "   1 list 1.\n"
    "   2 list 2.\n"
    "   3 merge \n"
    );
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
}

NumNodePtr merge( NumNodePtr tempPtr1, NumNodePtr tempPtr2 )
{
    NumNode merge; 
    NumNodePtr begin, mergePtr = &merge;         
    begin = mergePtr;                              
    while ( tempPtr1 != NULL && tempPtr2 != NULL)
    {
        if ( tempPtr1->data < tempPtr2->data)
        {
        mergePtr->next = tempPtr1;
        tempPtr1 = tempPtr1->next;
        mergePtr = mergePtr->next;
        }
        else
        {
        mergePtr->next = tempPtr2;
        tempPtr2 = tempPtr2->next;
        mergePtr = mergePtr->next;
        }
    }
    if ( tempPtr1 != NULL )                          
    {
        mergePtr->next = tempPtr1;
    }
    if ( tempPtr2 != NULL )                          
    {
        mergePtr->next = tempPtr2;
    }   
    return begin->next;                   
}



void printList( NumNodePtr currentPtr )
{
        while ( currentPtr != NULL )
        {
            printf("%d --> ", currentPtr->data);
            currentPtr = currentPtr->next;
        }
        puts("");
    
}