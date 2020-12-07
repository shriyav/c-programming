#include <stdlib.h>
#include <stdio.h>

unsigned power (unsigned x, unsigned y);

int main() {

  unsigned ans;
  
  ans = power(0,0);
  if (ans!=1) {
    exit(EXIT_FAILURE);
  }
  
  ans = power(4,0);
  if (ans!=1) {
    exit(EXIT_FAILURE);
  }
  
  
  ans = power(2,2);
  if (ans!=4) {
    exit(EXIT_FAILURE);
  }
  
  ans = power(0,6);
  if (ans!=0) {
    exit(EXIT_FAILURE);
  }
  
  
  ans = power(-1,1);
  if (ans!=-1) {
    exit(EXIT_FAILURE);
  }

  ans = power(-2,3);
  if (ans!=-8) {
    exit(EXIT_FAILURE);
  }
  printf("All tests passed!");
  exit(EXIT_SUCCESS);

  
}

