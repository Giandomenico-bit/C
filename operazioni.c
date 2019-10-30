// Operazioni elementari

#include <stdio.h>

int main( void ){

  int a, b;

  puts( "Inserisci primo valore : " );
  scanf( "%d", &a );
  puts( "Inserisci primo valore : " );
  scanf( "%d", &b );

  printf( "Addizione  : %3d\n", a + b );
  printf( "Differenza : %3d\n", a - b );
  printf( "Prodotto   : %3d\n", a * b );
  printf( "Quoziente  : %3d\n", a / b );

  return 0;
}
