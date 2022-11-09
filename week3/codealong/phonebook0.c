#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main( void ) {
  string names[]  = { "Carter", "David" };
  string number[] = { "+1-617-1000", "+1-949-468-2750" };

  string userInput = get_string( "Enter a name to search: " );

  for ( int i = 0; i < 2; i++ ) {
    if ( strcmp( names[ i ], userInput ) == 0 ) {
      printf( "Found %s....\n", number[ i ] );
      return 0;
    }
  }
  printf( "Not found!!\n" );
  return 1;
}
