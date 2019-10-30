/* Maggiore tra 5 numeri */

#include <stdio.h>

int main( void ){

  int a, b, c, d, e;
  int A, B, C, D, E;
  int result;

  printf( "Inserisci primo numero : " );
  scanf( "%d", &a );
  printf( "Inserisci secondo numero : " );
  scanf( "%d", &b );
  printf( "Inserisci terzo numero : " );
  scanf( "%d", &c );
  printf( "Inserisci quarto numero : " );
  scanf( "%d", &d );
  printf( "Inserisci quinto numero : " );
  scanf( "%d", &e );

  A = a * ( a >= b ) * ( a >= c ) * ( a >= d ) * ( a >= e );
  B = b * ( b >= c ) * ( b >= d ) * ( b >= e ) * ( b > a );
  C = c * ( c >= d ) * ( c >= e ) * ( c > a  ) * ( c > b );
  D = d * ( d >= e ) * ( d > a  ) * ( d > b  ) * ( d > c );
  E = e * ( e > a )  * ( e > b  ) * ( e > c  ) * ( e > d );

  result = A + B + C + D + E;

  printf( "Il massimo e' : %d\n", result );
  return 0;
}
