#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char s = 'a';
	char S = 'A';

	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	while (S <= 'Z')
	{
		putchar(S);
		S++;
	}
	putchar('\n');
	return (0);
}
