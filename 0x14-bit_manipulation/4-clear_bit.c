#include <stdio.h>
#include "main.h"

/**
 *clear_bit - a function that sets the value of a bit to 0 at a given index
 *@n: the binary integer to index
 *@index: the bit to clear
 *
 *Return: 1 if successful, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
  if (index >= sizeof(unsigned long int) *8)
    {
      return (-1);
    }

  *n &= ~(1UL << index);

  return (1);
}
