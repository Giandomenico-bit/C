// calcolo circonferenza e superficie
// del cechio

#include <stdio.h>

#define Pi 3.141592

int main( void ){

  float circonferenza, area;
  int raggio;

  printf( "%s", "Inserire raggio : " );
  scanf( "%d", &raggio );

  circonferenza = 2.0 * Pi * ( float )raggio;
  area = Pi * ( float )raggio * ( float )raggio;

  printf( "Circonferenza : %.3f\n", circonferenza );
  printf( "Area : %.3f\n", area );

  return 0;
}
