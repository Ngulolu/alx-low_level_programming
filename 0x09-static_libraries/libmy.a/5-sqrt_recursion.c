#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *root_check - returns the natural root of an integer c
 *@g:guess root of any integer c
 *@c:the 'any' integer to find natural root for
 *
 *Return: -1 or natural root of c
 */

int root_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (root_check(g + 1, c));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @t: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int t)
{
	if (t == 0)
		return (0);
	return (root_check(1, t));
}
