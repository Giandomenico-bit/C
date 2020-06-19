#include <stdio.h>
#include <stdlib.h>

struct CodaNode {
  int dato;
  struct CodaNode* next;
};

typedef struct CodaNode CodaNode;

CodaNode* CreaNodo( int dato );
void InserimentoInCoda( CodaNode** topPtr, int dato );
void CancellazioneInCoda( CodaNode** topPtr );
void StampaCoda( CodaNode* topPtr );
void Instructions( void );

int main( void ) {

  CodaNode* Testa = NULL;
  int choice, dato;

  Instructions();
  printf( "Inserisci operazione : " );
  scanf( "%d", &choice );

  while( choice != 3 ) {
      switch ( choice ) {

        case 1 :
           system( "clear" );

           printf( "Inserisci elemento : " );
           scanf( "%d", &dato );
           puts( "\nCODA : " );
           InserimentoInCoda( &Testa, dato );
           StampaCoda( Testa );
           puts( "\n" );
           break;

        case 2 :
           puts( "\nCODA : " );
           CancellazioneInCoda( &Testa );
           StampaCoda( Testa );
           puts( "\n" );
           break;

        default :
           puts( "Operazione non valida" );
           break;
      }
      printf( "Inserisci operazione : " );
      scanf( "%d", &choice );
  }


  return 0;
}

void Instructions( void ) {

   puts( "1) Inserisci in Coda" );
   puts( "2) Rimuovi dalla Coda");
   puts( "3) To end program" );
   puts( "" );
}

CodaNode* CreaNodo( int dato ) {

   CodaNode* nodoCoda = ( CodaNode* )malloc( sizeof( CodaNode ));

   nodoCoda->dato = dato;
   nodoCoda->next = NULL;

   return nodoCoda;
}

void InserimentoInCoda( CodaNode** topPtr, int dato ) {

     CodaNode* tempPtr = *topPtr;

     if( *topPtr == NULL )
         *topPtr = CreaNodo( dato );
     else
         InserimentoInCoda( &( tempPtr->next ), dato );
}

void CancellazioneInCoda( CodaNode** topPtr ) {

     CodaNode* deletePtr;

     if( *topPtr != NULL ) {
         deletePtr = *topPtr;
         *topPtr = ( *topPtr )->next;
         free( deletePtr );
     }
     else
       puts( "La coda è vuota." );
}

void StampaCoda( CodaNode* topPtr ) {

     if( topPtr != NULL ) {
         printf( "----> %d ", topPtr->dato );
         StampaCoda( topPtr->next );
     }
}
