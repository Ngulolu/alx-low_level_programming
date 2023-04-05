#include <stdio.h>
#include "lists.h"

/**
 *print_listint - print list
 *Return: size_t
 *@h: list
 */

size_t print_listint(const listint_t *h)
{
  int nodes = 0;
  const listint_t *current = h;
  
  for(; current != NULL; current = current->next)
    {
      printf("%d\n", current->n);
      nodes++;
    }
  return (nodes);
}
