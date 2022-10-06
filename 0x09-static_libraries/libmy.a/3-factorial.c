#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *factorial - calculates the factorial number
 *@n: number to calculate the factorial for.
 *Return: factorial number
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
