#include <stdio.h>

#define LENGTHOF(a) (&a)[1] - a

void selection_sort(int a[], int length);

int main(void) {
  int    numbers[] = {4,  6,  2,    78,   34,  52,    123, 123, 55,   65,   33,
                      89, 90, 1234, 5542, 782, 23478, 232, 232, 1243, 5342, 78};
  size_t length    = LENGTHOF(numbers);

  selection_sort(numbers, length);

  for (int i = 0; i < length; i++) {
    printf("%d ", numbers[i]);
  }
}

void selection_sort(int a[], int length) {
  for (int i = 0; i < length - 1; i++) {
    int min_pos = i;
    for (int j = i + 1; j < length; j++) {
      if (a[j] < a[min_pos]) {
        int temp   = a[j];
        a[j]       = a[min_pos];
        a[min_pos] = temp;
      }
    }
  }
}
