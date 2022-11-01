#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = { 1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };

int compute_score( string word );

int main( void ) {
  // Get input words from both players
  string word1 = get_string( "Player 1: " );
  string word2 = get_string( "Player 2: " );

  // Score both words
  int score1 = compute_score( word1 );
  int score2 = compute_score( word2 );

  // TODO: Print the winner
  if ( score1 > score2 ) {
    printf( "Player 1 wins!\n" );
  } else if ( score1 == score2 ) {
    printf( "Tie!\n" );
  } else {
    printf( "Player 2 wins!\n" );
  }
}

int compute_score( string word ) {
  // TODO: Compute and return score for string
  int score   = 0;
  int wordLen = strlen( word );
  // string toupper(word = toupper( word );

  for ( int i = 0; i < wordLen; i++ ) {
    if ( toupper( word[ i ] ) == 'A' ) {
      score += POINTS[ 0 ];
    } else if ( toupper( word[ i ] ) == 'B' ) {
      score += POINTS[ 1 ];
    } else if ( toupper( word[ i ] ) == 'C' ) {
      score += POINTS[ 2 ];
    } else if ( toupper( word[ i ] ) == 'D' ) {
      score += POINTS[ 3 ];
    } else if ( toupper( word[ i ] ) == 'E' ) {
      score += POINTS[ 4 ];
    } else if ( toupper( word[ i ] ) == 'F' ) {
      score += POINTS[ 5 ];
    } else if ( toupper( word[ i ] ) == 'G' ) {
      score += POINTS[ 6 ];
    } else if ( toupper( word[ i ] ) == 'H' ) {
      score += POINTS[ 7 ];
    } else if ( toupper( word[ i ] ) == 'I' ) {
      score += POINTS[ 8 ];
    } else if ( toupper( word[ i ] ) == 'J' ) {
      score += POINTS[ 9 ];
    } else if ( toupper( word[ i ] ) == 'K' ) {
      score += POINTS[ 10 ];
    } else if ( toupper( word[ i ] ) == 'L' ) {
      score += POINTS[ 11 ];
    } else if ( toupper( word[ i ] ) == 'M' ) {
      score += POINTS[ 12 ];
    } else if ( toupper( word[ i ] ) == 'N' ) {
      score += POINTS[ 13 ];
    } else if ( toupper( word[ i ] ) == 'O' ) {
      score += POINTS[ 14 ];
    } else if ( toupper( word[ i ] ) == 'P' ) {
      score += POINTS[ 15 ];
    } else if ( toupper( word[ i ] ) == 'Q' ) {
      score += POINTS[ 16 ];
    } else if ( toupper( word[ i ] ) == 'R' ) {
      score += POINTS[ 17 ];
    } else if ( toupper( word[ i ] ) == 'S' ) {
      score += POINTS[ 18 ];
    } else if ( toupper( word[ i ] ) == 'T' ) {
      score += POINTS[ 19 ];
    } else if ( toupper( word[ i ] ) == 'U' ) {
      score += POINTS[ 20 ];
    } else if ( toupper( word[ i ] ) == 'V' ) {
      score += POINTS[ 21 ];
    } else if ( toupper( word[ i ] ) == 'W' ) {
      score += POINTS[ 22 ];
    } else if ( toupper( word[ i ] ) == 'X' ) {
      score += POINTS[ 23 ];
    } else if ( toupper( word[ i ] ) == 'Y' ) {
      score += POINTS[ 24 ];
    } else if ( toupper( word[ i ] ) == 'Z' ) {
      score += POINTS[ 25 ];
    } else {
      score += 0;
    }
  }
  return score;
}
