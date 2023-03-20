#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - Entry point
*@size: size of the array
*@t : character of type char
*
*Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char t)
{
char *array = NULL;  /**Declaration of a pointer array of type char**/
unsigned int i;      /*Declaration of integer*/

if (size == 0)
return (NULL);
if (size != 0)
{
array = (char *)malloc(size * sizeof(char));
if (array != NULL)
{
for (i = 0; i < size; i++)
array[i] = c;
}
}
return (array);
}
