#include <stdlib.h>
#include <stdio.h>

size_t maxSeq(int * array, size_t n);

int main() {
  int a1[] = {1, 2, 3, 4, 5};
  if (maxSeq(a1, 5) != 5) {
    printf("Passed test 1.");
    return EXIT_FAILURE;
  }

  int* a2=NULL;
  if (maxSeq(a2, 0) != 0) {
    printf("Passed test 2.");
    return EXIT_FAILURE;
  }

  int a3[] = {1, 2, 3, 1, 2, 3};
  if (maxSeq(a3, 6) != 3) {
    printf("Passed test 3.");
    return EXIT_FAILURE;
  }

  int a4[] = {1, 2, 3, 1, 2, 3, 4};
  if (maxSeq(a4, 7) != 4) {
    printf("Passed test 4.");
    return EXIT_FAILURE;
  }

  int a5[] = {1, 1, 1, 1, 1};
  if (maxSeq(a5, 5) != 1) {
    printf("Passed test 5.");
    return EXIT_FAILURE;
   }

  int a6[] = {1, 2, -1};
  if (maxSeq(a6, 3) != 2) {
    printf("Passed test 6.");
    return EXIT_FAILURE;
  }

  int a7[] = {3, 2, 1};
  if (maxSeq(a7, 3) != 1) {
    printf("Passed test 7.");
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;

}
