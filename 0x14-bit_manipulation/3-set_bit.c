#include "main.h"

/**
 *set_bit - a function that sets the value of a bit
 *@n: the value to be set to a bit at a given function
 *@index: the index to be set value for
 *
 *Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index; /*A mask initialized with 1 */
*n |= mask; /* use bitwise OR to set the bit at the index to 1 */

return (1);

}
