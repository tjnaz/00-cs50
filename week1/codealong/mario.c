#include <stdio.h>

int main(void) {
    const int numberOfBricks = 5;
    for (int j=0; j<numberOfBricks; j++) {
        for (int i=0; i<numberOfBricks; i++) {
            printf("#");
        }
    printf("\n");
    }
}