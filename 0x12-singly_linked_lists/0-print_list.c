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
size_t count = 0;

for (; h != NULL; h = h->next, count++)
{
if (h->str == NULL)
printf("[0](nil)\n");
else
printf("[%d]%s\n", h->len, h->str);
}
return (count);
}
