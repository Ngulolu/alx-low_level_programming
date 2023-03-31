#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *print_list(const list_t *h) - a function with one argument
 *@h: pointer to struct list_t
 *
 *Description: prints all elements of a list
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
int count = 0;

for (; h != NULL; h = h->next)
{
printf("%d\n", h->len);
count++;
}
return (count);
}
