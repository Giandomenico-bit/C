// somma cifre di un numero

#include <stdio.h>

int main( void ){

  int value;
  int digit_1, digit_2, digit_3;
  int sum;

  puts( "Inserisci un numero di 3 cifre : " );
  scanf( "%d", &value );

  if( value > 99 && value < 1000 ){

    digit_1 = value % 10;
    value = value / 10;

    digit_2 = value % 10;
    value = value / 10;

    digit_3 = value % 10;
    sum = digit_1 + digit_2 + digit_3;

    printf( "Somma : %d\n", sum );

  } else {

    puts( "Error!" );

  }


  return 0;
}
