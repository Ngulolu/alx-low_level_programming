#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 *Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	int ac;
	char i;

	for (ac = 0; ac < 10; ac++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
