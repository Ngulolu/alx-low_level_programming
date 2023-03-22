#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocates memory of any type
 * @s: unsigned int size of memory to be allocated 
 *
 * Description: allocated memory using malloc
 * Return: pointer allocated to memory
 */

void *malloc_checked(unsigned int s)
{
void *n;

n = malloc(s);

if (n == NULL)

exit(98);

 return (n);

}
