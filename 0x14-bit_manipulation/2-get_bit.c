#include "main.h"
#include <stdio.h>

/**
 *get_bit - returns the value of a bit at a given index
 *@n: binary integer
 *@index: indexing integer
 *
 *Return: -1 or 0
 */


int get_bit(unsigned long int n, unsigned int index)
{
  /* Check if index is greater than the bit size of n */

unsigned long int mask = 1UL;
unsigned int i = 0;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

/* Shift mask left until it has a single bit set at the given index */
while (i < index)
{
mask <<= 1;
i++;
}

/* Use the mask to check the bit value at the given index */
return ((n & mask) != 0);
}
