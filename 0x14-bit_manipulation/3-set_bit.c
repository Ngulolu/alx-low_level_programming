#include "main.h"

/**
 *set_bit - a function that sets the value of a bit
 *@n: the value a bit to be set to 1 at a given index
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
