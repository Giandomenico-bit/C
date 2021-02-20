// calcolo maggiore tra due numeri

#include <stdio.h>

int main( void ){

  int a, b;
  int max;

  printf( "%s", "Inserisci primo numero : " );
  scanf( "%d", &a );
  printf( "%s", "Inserisci secondo numero : " );
  scanf( "%d", &b );

  max = a;
  if( b > a ) max = b;

  printf( "il massimo e' : %d\n", max );

  return 0;
}
