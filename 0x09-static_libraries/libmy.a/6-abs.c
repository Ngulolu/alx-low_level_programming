#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 *_abs - a fucntion that finds the absolute integer input
 *@ca: integer input
 *Return: absolute value of ca
 */
int _abs(int ca)
{
	return (ca * ((ca > 0) - (ca < 0)));
}
