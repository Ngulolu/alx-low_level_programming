#include <stdio.h>
#include <unistd.h>
/**
 *main -prints the first 50 Fibonnaci numbers starting from 1 & 2, separated by
 *      a comma and space.
 *
 *Return: 0, always
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
