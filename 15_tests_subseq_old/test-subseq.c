#include <stdlib.h>
#include <stdio.h>

size_t maxSeq(int * array, size_t n);

void main() {
  
  int a1[8] = {3, 2, 1, 3, 8, 10, 4, 5};
  if (maxSeq(a1, 8) != 4) {
    printf("Failed on a1");
    exit(EXIT_FAILURE);
  }
  else {
    exit(EXIT_SUCCESS);
  }
 
  int a2[4] = {0, 0, 0, 0};
  maxSeq(a2, 4);
}
