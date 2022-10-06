#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 *_isalpha - a function that checks for alphabetic character
 *@i:a single letter input
 *Return: 1 if i is a letter, lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int i)
{
	if (((i >= 'a') && (i <= 'z')) || ((i >= 'A') && (i <= 'Z')))
		return (1);
	else
		return (0);
}
