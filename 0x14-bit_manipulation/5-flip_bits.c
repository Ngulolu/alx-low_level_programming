#include "main.h"
#include <stdio.h>

/**
 *flip_bits - a function that returns the number of bits to flip to get from one number to another
 *@n: the first bit word
 *@m: the second bit word
 *
 *Return: the hamming distance
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flipped = n ^ m;
unsigned int len = 0;
unsigned int i = 0;

/* iterate over each bit in flipped */

for (; i < sizeof(unsigned long int) * 8; i++)
{
if (flipped & (1UL << i))
{
len++;
}
}
return (len);
}
