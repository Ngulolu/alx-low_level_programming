#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 *main - entry point.
 *Return: 0 on sucses.
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
