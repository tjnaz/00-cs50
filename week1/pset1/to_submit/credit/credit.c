#include <cs50.h>
#include <stdio.h>
int main( void ) {
  // long int cardNumber = 4076530000372521; // VISA
  long cardNumber = get_long( "Enter the Card Number: " );
  int  i, i12, i13, i14, i15, total;
  int  odd = 0, even = 0, tempE = 0;

  // Find the length of the cardNumber
  for ( i = 0; cardNumber != 0; i++ ) {
    if ( i % 2 == 0 ) {
      if ( i == 12 ) {
        i12 = cardNumber % 10;
      }
      if ( i == 14 ) {
        i14 = cardNumber % 10;
      }
      // odd numbers
      odd += cardNumber % 10;
    } else {
      if ( i == 13 ) {
        i13 = cardNumber % 10;
      }
      if ( i == 15 ) {
        i15 = cardNumber % 10;
      }
      // even numbers
      tempE = ( cardNumber % 10 ) * 2;
      for ( int j = 0; tempE != 0; j++ ) {
        even += tempE % 10;
        tempE /= 10;
      }
    }
    cardNumber /= 10;
  }
  total = odd + even;

  if ( ( i == 13 || i == 15 || i == 16 ) && total % 10 == 0 ) {
    if ( ( i == 13 && i12 == 4 ) || ( i == 16 && i15 == 4 ) ) {
      printf( "VISA\n" );
    } else if ( ( i == 15 && i14 == 3 ) && ( i13 == 4 || i13 == 7 ) ) {
      printf( "AMEX\n" );
    } else if ( ( i == 16 && i15 == 5 ) &&
                ( i14 == 1 || i14 == 2 || i14 == 3 || i14 == 4 || i14 == 5 ) ) {
      printf( "MASTERCARD\n" );
    } else if ( total % 10 == 0 ) {
      printf( "INVALID\n" );
    } else {
      printf( "INVALID\n" );
    }
  } else {
    printf( "INVALID\n" );
  }
}
