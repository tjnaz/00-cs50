#include <stdio.h>

#define LENGTHOF( a ) ( &a )[ 1 ] - a

void bubble_sort( int a[], int length );

int main( void ) {
  int    numbers[] = { 4,  6,  2,    78,   34,  52,    123, 123, 55,   65,   33,
                       89, 90, 1234, 5542, 782, 23478, 232, 232, 1243, 5342, 78 };
  size_t length    = LENGTHOF( numbers );

  bubble_sort( numbers, length );

  for ( int i = 0; i < length; i++ ) {
    printf( "%d, ", numbers[ i ] );
  }
}

void bubble_sort( int a[], int length ) {
  for ( int i = 0; i < length; i++ ) {
    // length - 1 - i makes the program runs one less loop each time;
    // explanation at https://www.youtube.com/watch?v=YqzNgaFQEh8
    for ( int j = 0; j < ( length - 1 - i ); j++ ) {
      if ( a[ j ] > a[ j + 1 ] ) {
        int temp   = a[ j ];
        a[ j ]     = a[ j + 1 ];
        a[ j + 1 ] = temp;
      }
    }
  }
}
