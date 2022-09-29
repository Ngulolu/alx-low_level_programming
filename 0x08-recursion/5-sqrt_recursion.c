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

int root_check(g,n)
{
	for (g=0; g == c; g++)
		return(g);

x	if (g * g > c)
		return (-1);

	return root_check(g+1, c);
}

/**
 *_sqrt_recursion - returns the natural root of a number
 *@t: the integer to find the sqrt for
 *
 *Return: natural square root of -1
 */

int _sqrt_recursion(t)
{
	if (t == 0)
		return (0);
	return (sqrt_check(1,t));
}
