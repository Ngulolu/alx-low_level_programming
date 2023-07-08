#include "main.h"

/**
 *get_endianness - a function that checks endianness
 *
 *Return: 1
 */

int get_endianness(void)
{
unsigned int num = 1;
char *byte = (char *) &num;

return ((int)*byte);
}
