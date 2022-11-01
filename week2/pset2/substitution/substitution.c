#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main( int argc, string argv[] ) {
  string key = "";
  if ( argc == 2 ) {
    key = argv[ 1 ];
  } else {
    printf( "Usage: ./substitution key\n" );
    return 1;
  }

  int lenKey = strlen( key );
  int count  = 0;

  for ( int k = 0; k < lenKey; k++ ) {
    if ( (int)key[ k ] < 65 || ( (int)key[ k ] > 90 && (int)key[ k ] < 97 ) ||
         (int)key[ k ] > 122 ) {
      printf( "Key must contain only alphabetical characters\n" );
      return 1;
    }
    count = 0;
    for ( int l = 0; l < lenKey; l++ ) {
      if ( (int)key[ k ] == (int)key[ l ] ) {
        count += 1;
        if ( count > 1 ) {
          printf( "Duplicate characters in the key\n" );
          return 1;
        }
      }
    }
  }

  if ( lenKey != 26 ) {
    printf( "Key must contain 26 characters\n" );
    return 1;
  }

  string alphabet  = "abcdefghijklmnopqrstuvwxyz";
  string text      = get_string( "plaintext: " );
  int    len       = strlen( text );
  int    lenAlphbt = strlen( alphabet );
  int    i, j = 0;

  printf( "ciphertext: " );
  for ( i = 0; i < len; i++ ) {
    if ( (int)text[ i ] < 65 || (int)text[ i ] > 122 ) {
      printf( "%c", text[ i ] );
    }
    for ( j = 0; j < lenAlphbt; j++ ) {
      if ( text[ i ] == alphabet[ j ] ||
           text[ i ] == toupper( alphabet[ j ] ) ) {
        if ( isupper( text[ i ] ) ) {
          printf( "%c", toupper( key[ j ] ) );
        } else if ( islower( text[ i ] ) ) {
          printf( "%c", tolower( key[ j ] ) );
        }
      }
    }
  }
  printf( "\n" );
}
