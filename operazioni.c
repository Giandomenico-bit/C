// Operazioni elementari

#include <stdio.h>

int main( void ){

  float a, b;

  puts( "Inserisci primo valore : " );
  scanf( "%f", &a );
  puts( "Inserisci primo valore : " );
  scanf( "%f", &b );

  printf( "Addizione  : %.2f\n", a + b );
  printf( "Differenza : %.2f\n", a - b );
  printf( "Prodotto   : %.2f\n", a * b );
  printf( "Quoziente  : %.2f\n", a / b );

  return 0;
}
