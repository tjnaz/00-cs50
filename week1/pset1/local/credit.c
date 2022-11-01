#include <stdio.h>

int main( void ) {
  // long int cardNumber = 4076530000372521; // VISA
  long int cardNumber = 5199999999999991;
  int      i, i12, i13, i14, i15, total;
  int      odd = 0, even = 0, tempE = 0;

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
  printf( "Odd: %d; Even: %d; Total: %d\n", odd, even, total );

  if ( ( i == 13 || i == 15 || i == 16 ) && total % 10 == 0 ) {
    if ( ( i == 13 && i12 == 4 ) || ( i == 16 && i15 == 4 ) ) {
      printf( "Visa\n" );
    } else if ( ( i == 15 && i14 == 3 ) && ( i13 == 4 || i13 == 7 ) ) {
      printf( "Amex\n" );
    } else if ( ( i == 16 && i15 == 5 ) &&
                ( i14 == 1 || i14 == 2 || i14 == 3 || i14 == 4 || i14 == 5 ) ) {
      printf( "MasterCard\n" );
    } else if ( total % 10 == 0 ) {
      printf( "Not in the database or different card provider!\n" );
    } else {
      printf( "Invalid!\n" );
    }
  } else {
    printf( "Invalid!\n" );
  }
}
