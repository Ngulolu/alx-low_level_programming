#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *_islower - checks for lowercase char.
 *@i: a single letter input.
 *Return: 1 if input(int i)is lowercase, 0, if otherwise.
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
