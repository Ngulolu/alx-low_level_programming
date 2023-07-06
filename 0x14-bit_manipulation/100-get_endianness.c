#include "main.h"
#include <stdio.h>

/**
 *get_endianness - function that returns the least significant byte value
 *
 *Return: 0 if large endian, and 1 if least endian
 */


int get_endianness(void)
{
unsigned int num = 1; /* Declare variable "num" type int with a value of 1 */
char *byte = (char *)&num;  /* Create a pointer and set the address of num */

return ((int)*byte); /*Return the value of "byte"pointed to by byte */

}

/**
 *main - entry point of the program
 *
 *Return: Always 0
 */

int main(void)
{
int n;
n = get_endianness();
if (n != 0)
{
printf("least endian\n");
}
else
{
printf("large endian\n");
}
return (0);
}
