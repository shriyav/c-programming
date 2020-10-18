#include <stdlib.h>
#include <stdio.h>

size_t maxSeq(int * array, size_t n) {
  int highest = 0;
  int counter = 1;
  for (int i = 1; i <= n; i++) {
    if (array[i] > array[i-1]) {
	counter ++;
      }
    else if (counter > highest) {
      highest = counter;
      counter = 1;
    }
    else {
      counter = 1;
    }
  }
  printf("This is the highest: %d\n", highest);
  return highest;
}

