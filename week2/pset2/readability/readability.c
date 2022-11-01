#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int countLetters( string text );
int countWords( string text );
int countSentences( string text );

int main( void ) {
  string text = get_string( "Enter text: " );

  int letters   = countLetters( text );
  int words     = countWords( text );
  int sentences = countSentences( text );

  float index             = 0;
  float avgNumOfLetters   = ( letters / (float)words ) * 100;
  float avgNumOfSentences = ( sentences / (float)words ) * 100;

  index = ( 0.0588 * avgNumOfLetters ) - ( 0.296 * avgNumOfSentences ) - 15.8;

  if ( index < 0 ) {
    printf( "Before Grade 1\n" );
  } else if ( index >= 16 ) {
    printf( "Grade 16+\n" );
  } else {
    printf( "Grade %.0f\n", index );
  }
}

int countLetters( string text ) {
  int letters = 0;
  int len     = strlen( text );

  if ( len == 0 ) {
    return letters;
  }

  for ( int i = 0; i < len; i++ ) {
    if ( ( text[ i ] >= 'a' && text[ i ] <= 'z' ) ||
         ( text[ i ] >= 'A' && text[ i ] <= 'Z' ) ) {
      letters += 1;
    }
  }
  return letters;
}

int countWords( string text ) {
  int words = 0;
  int len   = strlen( text );

  if ( len == 0 ) {
    return words;
  }

  for ( int i = 1; i < len; i++ ) {
    if ( text[ i ] == ' ' ) {
      words += 1;
    }
  }
  words += 1;
  return words;
}

int countSentences( string text ) {
  int sentences = 0;
  int len       = strlen( text );

  if ( len == 0 ) {
    return sentences;
  }

  for ( int i = 1; i < len; i++ ) {
    if ( text[ i ] == '.' || text[ i ] == '!' || text[ i ] == '?' ) {
      sentences += 1;
    }
  }
  return sentences;
}
