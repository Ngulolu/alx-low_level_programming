#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */
int main(void)
{
	char A = 'a';

	while (A <= 'z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
