#include <stdio.h>
#include <stdlib.h>

void rotate(char matrix [10] [10]) {
  //first make a copy of this matrix by copying each element into the copy
  char clone [10] [10];
  for (int i=0; i<10; i++) {
    for (int j=0; j<10; j++) {
      clone [i] [j] = matrix [i] [j];
    }
  }

  // now rotate the elements
  for (int i=0; i<10; i++) {
    for (int j=0; j<10; j++) {
      matrix [i] [j] = clone [9-j] [i];
    }
  }
}
