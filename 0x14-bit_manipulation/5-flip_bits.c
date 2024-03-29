#include "main.h"

/**
 *flip_bits - afunction that detdermines the number of flips to get from n to m
 *@n: the first number which you want to calculate number of bits to be flipped
 *@m: the second number which you want to flip bits
 *
 *Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;

while (xor_result != 0)

{
count += xor_result & 1;
xor_result >>= 1;
}

return (count);

}
