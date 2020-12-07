#include <stdlib.h>
#include <stdio.h>

unsigned power_rec(unsigned x, unsigned y, unsigned ans) {
  if (y==0) {
    return ans;
  }
  return power_rec(x, y-1, ans*x);
}

unsigned power(unsigned x, unsigned y) {
  if (y==1) {
    return x;
  }
  if (y==0) {
    return 1;
  }
  if (x==0) {
    if (y==0) {
      return 1;
    } else {
      return 0;
    }
  }

  return power_rec(x, y, 1);
  
}
