#include "lists.h"
#include <stdio.h>

/**
 *list_len - Returns the number of elements in a linked list_t list.
 *@h: A pointer to the head of the list 
 *
 *Return: No. of nodes in a list
 */

size_t list_len(const list_t *h)
{
  size_t count = 0;

  for (; h != NULL; h = h->next)
    count++;

  return (count);
}
