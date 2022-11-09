#include <cs50.h>
#include <stdio.h>

int main( void ) {
  int numbers[] = { 20, 500, 10, 5, 100, 1, 50 };
  int userInput = get_int( "Enter a number to search: " );

  for ( int i = 0; i < 7; i++ ) {
    if ( numbers[ i ] == userInput ) {
      printf( "Found at index: %d\n", i );
      return 0;
    }
  }
  printf( "Not found \n" );
  return 1;
}
