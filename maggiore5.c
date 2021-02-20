/* Maggiore tra 5 numeri */

#include <stdio.h>

int main( void ){

  int value1, value2, value3, value4, value5;
  int max;

  printf( "%s", "Inserisci primo numero   : " );
  scanf( "%d", &value1 );
  printf( "%s", "Inserisci secondo numero : " );
  scanf( "%d", &value2 );
  printf( "%s", "Inserisci terzo numero   : " );
  scanf( "%d", &value3 );
  printf( "%s", "Inserisci quarto numero  : " );
  scanf( "%d", &value4 );
  printf( "%s", "Inserisci quinto numero  : " );
  scanf( "%d", &value5 );

  max = value1;

  if( value2 > max ) max = value2;
  if( value3 > max ) max = value3;
  if( value4 > max ) max = value4;
  if( value5 > max ) max = value5;

  printf( "\nIl massimo e' : %d\n", max );

  return 0;
}
