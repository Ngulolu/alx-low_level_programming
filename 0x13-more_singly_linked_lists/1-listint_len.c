#include <stdio.h>
#include "lists.h"

/**
 *listint_len - get len of list
 *Return: size_t
 *@h: list
 */

size_t listint_len(const listint_t *h)
{
  unsigned int l = 0;
  const listint_t *current = h;

  for(; current != NULL; current = current->next)
    l++;

  return (l);
}
