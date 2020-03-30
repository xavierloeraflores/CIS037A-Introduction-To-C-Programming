/* 
 * 7.12
 * Card Shuffling
 * Author: Xavier Loera Flores
 * 4/22/2018
 */



#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//main functions
void shuffle( int wDeck[][ 13 ] );
void deal( const int wDeck[][ 13 ], const char *wface[], const char *wSuit[], char *wfSuit[], char *wfFace[] );

//operation functions
void pair( const char *wfSuit[], const char *wfFace[]);
void twoPair( const char *wfSuit[], const char *wfFace[] );
void threeKind( const char *wfSuit[], const char *wfFace[] );
void fourKind( const char *wfSuit[], const char *wfFace[] );
void flush( const char *wfSuit[], const char *wfFace[] );
void straight( const char *wfSuit[], const char *wfFace[], const char *wFace[] );

//sub-operation functions
void printflush(  const char *wfFace[], const char *wfSuit[], const char statement[] );

int main(void){
 const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };

 //initialize face array
 const char *face[ 13 ] = { "Ace", "Deuce", "Three", "Four",
                            "Five", "Six", "Seven", "Eight",
                            "Nine", "Ten", "Jack", "Queen", "King" };

    //initialize suit and face array for storing five-hand card
 char *fSuit[ 5 ] ;
 char *fFace[ 5 ] ;

 int deck[ 4 ][ 13 ] = { 0 };
 srand( time( 0 ) );

 shuffle( deck );
 deal( deck, face, suit, fSuit, fFace );
 pair( fSuit, fFace );
 twoPair( fSuit, fFace );
 threeKind( fSuit, fFace );
 fourKind( fSuit, fFace );
 flush( fSuit, fFace );
 straight( fSuit, fFace, face );

 return 0;
}

void shuffle( int wDeck[][ 13 ] ){
 int row, column, card;

 for(card = 1; card <= 52; card++){
  do{
   row = rand() % 4;
   column = rand() % 13;
  }
  while(wDeck[ row ][ column ] != 0);

  wDeck[ row ][ column ] = card;
 }
}

void deal( const int wDeck[][ 13 ], const char *wFace[], const char *wSuit[], char *wfSuit[], char *wfFace[] ){
 int card, row, column, i;

 //deal 5-card poker hand
 for(card = 1, i = 0; card <= 5; card++, i++){
  for(row = 0; row < 4; row++){
   for(column = 0; column < 13; column++){
    if(wDeck[ row ][ column ] == card){
               wfSuit[ i ] = wSuit[ row ];
               wfFace[ i ] = wFace[ column ];
          }
   }
  }
 }

 //display 5-card poker hand
 printf("Your hand: \n");
 for(i = 0; i < 5; i++){
  printf("%10s of %-8s\n", wfFace[ i ], wfSuit[ i ]);
 }
}

void pair(const char *wfSuit[], const char *wfFace[]){
    int card, numpairs = 0, k;
    int pair[ 5 ] = { 0 };

    for(card = 0; card < 5; card++){
       for(int i = card + 1; i < 5; i++){
          if(wfFace[ card ] == wfFace[ i ]){
             numpairs++;
             pair[ card ] = i;
        }}}
    if(numpairs == 1){
      for(card = 0; card < 5; card++){
         if(pair[ card ] != 0){
            k = pair[ card ];
            printf("\nPair:");
            printf("\n%s of %s ----- %s of %s\n", wfFace[ card ], wfSuit[ card ], wfFace[ k ], wfSuit[ k ] );
        }}}
}

void twoPair( const char *wfSuit[], const char *wfFace[] ){
    int card, numpairs = 0, k;
    int pair[ 5 ] = { 0 };
    for(card = 0; card < 5; card++){
        for(int i = card + 1; i < 5; i++){
            if(wfFace[ card ] == wfFace[ i ]){
                numpairs++;
                pair[ card ] = i;
         }}}
    if(numpairs == 2){
        printf("\n2 Pair:\n");
        for(card = 0; card < 5; card++){
            if(pair[ card ] != 0){
                k = pair[ card ];
                printf("%s of %s ----- %s of %s\n", wfFace[ card ], wfSuit[ card ], wfFace[ k ], wfSuit[ k ] );
          }
       }
    }
}

void threeKind( const char *wfSuit[], const char *wfFace[] ){
    int card, i, j = 0, k, x;
    int pair[ 3 ] = { 0 };
    for(card = 0; card < 3; card++){
        for(i = card + 1; i < 5; i++){
           if(wfFace[ card ] == wfFace[ i ]){
              for(x = i + 1; x < 5; x++){
                 if(wfFace[ i ] == wfFace[ x ]){
                    j++;
                    pair[ 0 ] = card;
                    pair[ 1 ] = i;
                    pair[ 2 ] = x;         
                 }}}}}
    
    if(j == 1){
       printf("\nThree of a kind:");
       for(card = 0; card < 3; card++){
             k = pair[ card ];
             printf("\n%10s of %-8s\n", wfFace[ k ], wfSuit[ k ] );
       }}}

void fourKind( const char *wfSuit[], const char *wfFace[] ){
    int card, i, indi = 0, pair[ 5 ] = { 0 };
    for(card = 0; card < 2; card++){
       for(i = card + 1; i < 5; i++){
          if(wfFace[ card ] == wfFace[ i ]){ 
             indi++;
             if(indi == 1)
                pair[ i - 1 ] = 1;
             pair[ i ] = 1;   
             }
       }        
       if(indi == 3)
          break;
       else if(indi > 3)
          break;
       else{
          indi = 0;
          for(i = 0; i < 5; i++)
             pair[ i ] = 0;
       }}    
    
    //display result
    if(indi == 3){
       printf("\nFour of a kind...\n");
       for(i = 0; i < 5; i++){
         if( pair[ i ] == 1)
            printf("\n%5s of %-9s\n", wfFace[ i ], wfSuit[ i ] );
       }     
       printf("\n");
    }
}

void flush ( const char *wfSuit[], const char *wfFace[] ){
   int i, j = 0;
   for(i = 1; i < 5; i++){
      if(wfSuit[ 0 ] != wfSuit[ i ] )
         j++;
   }
   if(j==0)
   printflush( wfFace, wfSuit, "Flush:" );
}

void straight( const char *wfSuit[], const char *wfFace[], const char *wFace[] ){
   int pass, count, temp,k =0 ;
   int faceValue[ 5 ] = { 0 };
   for(int i = 0 ; i < 5; i++){
      for(int j = 0 ; j < 13; j++){
         if(wfFace[ i ] == wFace[ j ]){
            faceValue[ i ] = j;          
         }}}
   
   for(pass = 0; pass < 4; pass++){
      for(count = 0; count < 4; count++){
         if(faceValue[ count ] > faceValue[ count + 1 ]){
            temp = faceValue[ count ];
            faceValue[ count ] = faceValue[ count + 1 ];
            faceValue[ count + 1 ] = temp;              
         }}}
   for(int i = 0; i < 4; i++){
      if(faceValue[ i ] + 1 != faceValue[ i + 1 ])
        k =1;               
   }
   if (k==0)
        printflush( wfFace, wfSuit, "Straight:" );
}

void printflush( const char *wfFace[], const char *wfSuit[], const char type[] ){
        printf("%s", type ); 
        for(int i = 0; i < 5; i++){
            printf("\n  %5s of %-8s\n", wfFace[ i ], wfSuit[ i ] );
      }}
