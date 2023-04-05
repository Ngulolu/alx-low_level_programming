#include <stdio.h>
#include "lists.h"

size_t listint_len(const listint_t *h)
{
  unsigned int l = 0;
  const listint_t *current = h;

  for(; current != NULL; current = current->next)
    l++;

  return (l);
}
