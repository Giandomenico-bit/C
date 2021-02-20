// Operazioni elementari

#include <stdio.h>

int main( void ){

  int a, b;

  printf( "%s", "Inserisci primo valore : " );
  scanf( "%d", &a );
  printf( "%s", "Inserisci primo valore : " );
  scanf( "%d", &b );

  putchar( '\n' );

  printf( "Addizione  : %3d\n", a + b );
  printf( "Differenza : %3d\n", a - b );
  printf( "Prodotto   : %3d\n", a * b );
  printf( "Quoziente  : %3d\n", a / b );
  printf( "Modulo     : %3d\n", a % b );

  printf( "\n%s\n", "Sono 5" );

  return 0;
}
