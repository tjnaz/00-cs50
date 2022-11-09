#include <cs50.h>
#include <stdio.h>

void draw( int n );

int main( void ) {
  int height = get_int( "Enter the height: " );
  draw( height );
}

void draw( int n ) {
  // Base case
  if ( n <= 0 ) {
    return;
  }

  // Recursive case
  draw( n - 1 );

  for ( int i = 0; i < n; i++ ) {
    printf( "#" );
  }
  printf( "\n" );
}
