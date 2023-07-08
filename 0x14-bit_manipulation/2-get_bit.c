#include "main.h"

/**
 *get_bit - function that returns the value of a bit at a given index.
 *@n:the value of the bit being returned at a given index
 *@index: the index to look its value for.
 *
 *Return: -1
 */

int get_bit(unsigned long int n, unsigned int index)

{
unsigned long int mask = 1UL << index; /*Declare and initialize mask*/

if (index >= sizeof(unsigned long int) * 8)

{
return (-1); /* Return 1 if index is out of range */
}
return ((n & mask) ? 1 : 0); /* Use bitwise AND to check the value */
}
