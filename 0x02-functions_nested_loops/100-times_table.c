#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 *print_times_table - prints the times table of input i, starting with 0
*@i:a random input i
 */

void print_times_table(int i)
{
	int num, mult, prod;

	if (i >= 0 && i <= 15)
	{
		for (num = 0; num <= i ; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
