#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_sign - a function that prints the sign of a number
 * @d: number input
 * Return: 1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-' if n < 0
 */
int print_sign(int d)
{
	if (d > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (d == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
