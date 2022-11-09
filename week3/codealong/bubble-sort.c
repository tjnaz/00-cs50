#include <stdio.h>

int main( void ) {
  int numbers[]   = { 4, 6, 2, 78, 34, 52, 123, 123, 55, 65 };
  int lastElement = sizeof( numbers ) / sizeof( numbers[ 0 ] );

  for ( int i = 0; i < sizeof( numbers ); i++ ) {
    if ( numbers[ i ] > numbers[ i + 1 ] ) {
      numbers[ i + 1 ] = numbers[ i ];
    }
  }
  printf( "%i\n", numbers[ lastElement ] );
}
