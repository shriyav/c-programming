#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n)
{
  size_t highest = 0;
  int counter = 1;

  if(n == 0)
    return highest;
  if(n == 1)
    return 1;


  for(int i=1; i < n; i++)
    {
      if(array[i] > array[i-1])
	counter++;

      else
	{ if(counter > highest)
	    highest = counter;

	  counter = 1;

	}
    }

  if(counter > highest)
    highest = counter;

  return highest;
}
