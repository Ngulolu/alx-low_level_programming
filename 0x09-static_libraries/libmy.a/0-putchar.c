#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 *main - entry point.
 *Return: 0 on sucses.
 */
int main(void)
{
	char c[] = "_putchar";
	int i;
	int len = strlen(c);

	for (i = 0; i < len; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
