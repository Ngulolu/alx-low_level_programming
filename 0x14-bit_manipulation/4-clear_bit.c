#include "main.h"

/**
 *clear_bit - a function that sets the value of a bit at a given index to 0.
 *@n: pointer to the number in which you want to set the bit
 *@index: the position of the bit you want to set
 *
 *Return: -1
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
unsigned long int mask = (1UL << index);

if (index >= sizeof(unsigned long int) * 8 || n == NULL)

{
return (-1);
}

*n &= mask; /*use bitwise AND to clear the bit at the index */

return (1);
}
