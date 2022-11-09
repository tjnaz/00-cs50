#include <stdio.h>

int main( void ) {
  int numbers[] = { 4,  6,  2,    78,   34,  52,    123, 123, 55,   65,   33,
                    89, 90, 1234, 5542, 782, 23478, 232, 232, 1243, 5342, 78 };
  int length    = sizeof( numbers ) / sizeof( numbers[ 0 ] );

  for ( int i = 0; i < length; i++ ) {
    for ( int j = 0; j < ( length - 1 ); j++ ) {
      if ( numbers[ j ] > numbers[ j + 1 ] ) {
        int temp         = numbers[ j ];
        numbers[ j ]     = numbers[ j + 1 ];
        numbers[ j + 1 ] = temp;
      }
    }
    printf( "%d, ", numbers[ i ] );
  }
}
