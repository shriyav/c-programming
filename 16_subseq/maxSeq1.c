#include <stdlib.h>
#include <stdio.h>

size_t maxSeq(int * array, size_t n) {
  size_t highest=0;
  int counter=1;

  if (n<=0) {
    return 0;
  }

  if (array == NULL) {
    return 0;
  }
  
  if (n==1) {
    return 1;
  }
  
  for (int i = 1; i < n; i++) {
    if (array[i] > array[i-1]) {
	counter ++;
	printf("counter value is: %d\n", counter);
	if (counter>highest) {
	  highest=counter;
	}
    }
    else {
	  if (counter > highest) {
	    highest = counter;
	    counter = 1;
	  }
	  else {
	    counter = 1;
	  }
	  printf("counter value is: %d\n", counter);
    }
  }
  printf("Got this: %lu.\n", highest);
  return highest;
}

