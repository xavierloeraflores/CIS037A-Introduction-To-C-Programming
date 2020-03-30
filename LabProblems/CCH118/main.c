#include <stdio.h>
#include <string.h>
int main(void)
{ 
    int account;    
    double oldbal, saleamount; 
    int transaccount;
    char oldname [ 30 ];
    int newaccount;
    char newname[ 30];
    double newbal;
    int match=0;



    FILE *oldfile;  
    FILE *transfile;    
    FILE *newfile;    


    if ( ( newfile = fopen( "newmast.dat", "w" ) ) == NULL ) {
        printf( "File could not be opened\n" );

    }
    else{

    if ( ( oldfile = fopen( "oldmast.dat", "r" ) ) == NULL ) {
        printf( "File could not be opened\n" );

    }
    else{
        if( ( transfile = fopen( "transactions.dat", "r" ) ) == NULL)
        {
            printf( "File could not be opened\n" );

        }
    else { 
            printf("Files were changed");
        fscanf( oldfile, "%d%s%lf", &account, &oldname, &oldbal );


        fscanf( transfile, "%d%lf", &transaccount, &saleamount );
        fscanf( newfile, "%d%s%lf", &newaccount, &newname, &newbal );
        while ( !feof( oldfile ) )
        {   
            transaccount=1;
            newbal=oldbal;
            while ( !feof( transfile ) )
            {
                if(transaccount==account&&match==0)
                {
                 newbal = oldbal + saleamount;
                 match++;
                }
                else
                    if(transaccount==account&&match>0)
                     newbal = newbal + saleamount;

                fscanf( transfile, "%d%lf", &transaccount, &saleamount );
            }
            rewind( transfile);
            match=0;

        fprintf( newfile, "%d %s %.2f\n", account, oldname, newbal );
        fscanf( oldfile, "%d%s%lf", &account, oldname, &oldbal );
        }

        rewind( newfile);
    }}
        fclose( newfile );
        fclose( oldfile );
        fclose( transfile );

   
    }
    return 0;
}
