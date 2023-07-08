#include "main.h"

/**
 *set_bit - a function that sets the value of a bit
 *@n: the pointer to the number to which you want to set bit
 *@index: the posiition of the bit which you want to set, starting from 0.
 *
 *Return: -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{

unsigned long int mask = 1UL << index; /*A mask initialized with 1 */
if (index >= sizeof(unsigned long int)  * 8 || n == NULL)

{
return (-1);
}
*n |= mask; /* use bitwise OR to set the bit at the index to 1 */

return (1);
}
