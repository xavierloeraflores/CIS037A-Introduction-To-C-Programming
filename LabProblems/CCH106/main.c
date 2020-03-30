/* 
 * 10.6
 * 
 * Author: Xavier Loera Flores
 * 5/15/2018
 */

#include <stdio.h>
#include <stdlib.h>

    struct customer {
            char lastName[ 15 ];
            char firstName[ 15 ]; unsigned int customerNumber;
            struct {
                char phoneNumber[ 11 ]; char address[ 50 ]; char city[ 15 ];
                char state[ 3 ];
                char zipCode[ 6 ];
               } personal;
            } customerRecord, *customerPtr;
            
            
            
            
int main(int argc, char** argv) {

    customerPtr = &customerRecord;
    struct customer dank;
    scanf("%s",dank.lastName);
    char a[10]=customerRecord.lastName;
    printf("%s",a);
    //a)Member lastNameof structure customerRecord
    customerRecord.lastName
    //b)Member lastNameof the structure pointed to by customerPtr
    customerPtr->lastName
    //c)Member firstNameof structure customerRecord
    customerRecord.firstName
    //d)Member firstNameof the structure pointed to by customerPtr
    customerPtr->firstName
    //e)Member customerNumberof structure customerRecord
    customerRecord. customerNumber
    //f)Member customerNumberof the structure pointed to by customerPtr
    customerRecord-> customerNumber
    //g)Member phoneNumberof member personal of structure customerRecord
    customerRecord.personal.phoneNumber
    //h) Member phoneNumberof member personal of the structure pointed to by customerPtr
    customerRecord->personal.phoneNumber
    //i)Member address of member personal of structure customerRecord
    customerRecord.personal.address
    //j)Member address of member personal of the structure pointed to by customerPtr
    customerRecord->personal.address
    //k)Member city of member personal of structure customerRecord
    customerRecord.personal.city
    //)Member city of member personal of the structure pointed to by customerPtr
    customerRecord->personal.city
    //m) Member state of member personal of structure customerRecord
    customerRecord.personal.state
    //n) Member state of member personal of the structure pointed to by customerPtr
    customerRecord->personal.state
    //o)Member zipCodeof member personal of customerRecord
    customerRecord.personal.zipCode
    //p)Member zipCodeof member personal of the structure pointed to by customerPtr
    customerRecord->personal.zipCode
    return (EXIT_SUCCESS);
}

