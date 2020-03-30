/* 
 * 11.7
 * 
 * Author: Xavier Loera Flores
 * 5/22/2018
 */


 #include <stdio.h>
 int main( void )
 {

    int account;   
    double balance; 
    int transaccount;
    char name [ 30 ];
    unsigned int i;

    FILE *cfPtr;
    FILE *cfPtr2;

    if ( ( cfPtr = fopen( "oldmast.dat", "w" ) ) == NULL ) {
        printf( "clients could not be opened\n" );

    } 
    else
        if( ( cfPtr2 = fopen( "transactions.dat", "w" ) ) == NULL)
        {
            printf( "File could not be opened\n" );

        }
else {

                    
account=100; char name1 [30]="Alan Jones";balance=348.17;
fprintf( cfPtr, "%d%s%lf", account, name1, balance );
account=300; char name2 [30] ="Mary Smith";balance=27.19;
fprintf( cfPtr, "%d%s%lf", account, name2, balance );
account=500; char name3 [30] ="Sam Sharp";balance=0.00 ; 
fprintf( cfPtr, "%d%s%lf", account, name3, balance );
account=700; char name4 [30] ="Suzy Green";balance=-14.22 ;
fprintf( cfPtr, "%d%s%lf", account, name4, balance );
account=100; balance=27.14;
fprintf( cfPtr2, "%d%lf", account, balance );
account=300; balance=62.11;
fprintf( cfPtr2, "%d%lf", account, balance );
account=400; balance=100.56;
fprintf( cfPtr2, "%d%lf", account, balance );
account=900; balance=82.17;                    
fprintf( cfPtr2, "%d%lf", account, balance );                    
                    
   
            







      fclose ( cfPtr );
      fclose(cfPtr2);
} }