#include <stdio.h>
#include "main.h"

/**
 *get_bit - a function that returns the value of a bit at a given index
 *@n: integer to get bit value from
 *@index: index of n to get bit from
 *
 *Return: bit at the particular index
 */

int get_bit(unsigned long int n, unsigned int index)
{

  unsigned long int musk = 1UL << index;
  unsigned int i = 0;

  /*first check if index is greater than the bit size of an unsigned long int(8) */

  if (index >= sizeof(unsigned long int) *8)
    {
      return (-1);
    }

  /* Loops over bits of n from least signifcant bit to the index_th bit using the musk to test each */

  for (; i <= index; musk <<= 1)
    {
      if (i == index)
	{
	  return (n & musk) != 0;
	}
    }
  /* incase it finishes loop without indexth bit, may never, return -1 */

  return (-1);
}
