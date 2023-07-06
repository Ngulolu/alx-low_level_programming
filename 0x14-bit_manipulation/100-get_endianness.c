#include "main.h"
#include <stdio.h>

/**
 *get_endiannness - function that returns the value of the least significant byte
 *@num: variable of integer type 
 *@byte: the variable containing the address of variable num as an int
 *
 *Return: 0
 */


int get_endiannes(void)
{
unsigned int num = 1; /* Declare variable "num" type int with a value of 1 */
char *byte = (char *)num; /* Create a char pointer and set the address of num */

return ((int)*byte); /*Return the value of "byte"pointed to by byte */

}

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
