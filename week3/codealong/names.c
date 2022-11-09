#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main( void ) {
  string names[]   = { "Bill",  "Charlie", "Fred", "George",
                       "Ginny", "Percy",   "Ron",  "Harry" };
  string userInput = get_string( "Enter an HP character to search: " );

  for ( int i = 0; i < 8; i++ ) {
    if ( strcmp( names[ i ], userInput ) == 0 ) {
      printf( "Found...\n" );
      return 0;
    }
  }
  printf( "Not found" );
  return 0;
}
