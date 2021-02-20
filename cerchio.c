// calcolo circonferenza e superficie
// del cechio

#include <stdio.h>

#define Pi 3.141592

int main( void ){

  double raggio, circonferenza, area;

  printf( "%s", "Inserire raggio : " );
  scanf( "%lf", &raggio );

  circonferenza = 2.0 * Pi * raggio;
  area = Pi * raggio * raggio;

  printf( "Circonferenza : %.3f\n", circonferenza );
  printf( "Area : %.3f\n", area );

  return 0;
}
