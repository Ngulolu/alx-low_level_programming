#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program starts here
 *
 * Return: prints hexadecimal numbers in lowercase; 0 otherwise
 */

int main(void)

{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
