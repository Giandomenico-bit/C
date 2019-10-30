// calcolo maggiore tra due numeri

#include <stdio.h>

int main( void ){

  int a, b;

  puts( "Inserisci primo numero : " );
  scanf( "%d", &a );
  puts( "Inserisci primo numero : " );
  scanf( "%d", &b );

  if( a > b )
    printf( "Maggiore : %d\n", a );
  printf( "Maggiore : %d\n", b );

  return 0;
}
