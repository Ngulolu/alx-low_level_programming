#include "main.h"
#include  <stdio.h>

/**
 *print_binary - a function that prints decimal as binary
 *@n: unsigned integer/long integer
 */

void print_binary (unsigned long int n)
{
  /* creates a bit ma(u)sk with the most significant bit set */
  unsigned long int musk = 1UL << (sizeof(unsigned long int) * 8 - 1);

  /* Track if it has encountered a non zero bit yet */

  int begun = 0;

  /* Loop through each bit of the number, from left to right */

  for(; musk > 0; musk >>= 1)
    {
      /* Check if the corresponding bit in the number is set, and print '1' else its a non zero bit and return 0 */

      if (n & musk)
	{
	  putchar ('1');
	  begun = 1;
	}
      else if (begun)
	{
	  putchar('0');
	}
    }
  /* if number was zero, print a single '0' */

  if (!begun)
    {
      putchar ('0');
    }
}
  
