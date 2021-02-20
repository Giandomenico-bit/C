// somma cifre di un numero

#include <stdio.h>

int main( void ){

  int valore;
  int cifra1, cifra2, cifra3;
  int res;

  printf( "%s", "Inserisci un numero di 3 cifre : " );
  scanf( "%d", &valore );

  if( valore > 99 && valore < 1000 ) {

    cifra1 = valore % 10;
    valore = valore / 10;

    cifra2 = valore % 10;
    valore = valore / 10;

    cifra3 = valore % 10;
    res = cifra1 + cifra2 + cifra3;

    printf( "Somma : %d\n", res );

  }
  else
    printf( "%s\n", "Errore!" );

  return 0;
}
