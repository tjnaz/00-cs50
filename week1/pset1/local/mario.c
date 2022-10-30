#include <stdio.h>

int main( void ) {
  const int input  = 5;
  int       spaces = input;
  int       bricks = 1;

  while ( input < 1 && input > 8 ) {
  }
  for ( int i = 0; i < input; i++, bricks++ ) {
    for ( int j = 1; j <= spaces - bricks; j++ ) {
      printf( " " );
    }
    for ( int k = 1; k <= bricks; k++ ) {
      printf( "#" );
    }
    for ( int l = 0; l < 2; l++ ) {
      printf( " " );
    }
    for ( int m = 1; m <= bricks; m++ ) {
      printf( "#" );
    }
    printf( "\n" );
  }
}
