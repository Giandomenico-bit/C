// Operazioni elementari

#include <stdio.h>

int main( void ){

  int a, b;

  puts( "Inserisci primo valore : " );
  scanf( "%d", &a );
  puts( "Inserisci primo valore : " );
  scanf( "%d", &b );
  puts( "" );

  printf( "Addizione  : %3d\n", a + b );
  printf( "Differenza : %3d\n", a - b );
  printf( "Prodotto   : %3d\n", a * b );
  printf( "Quoziente  : %3d\n", a / b );
  printf( "Modulo     : %3d\n\n", a % b );

  printf( "Sono 5\n" );

  return 0;
}
