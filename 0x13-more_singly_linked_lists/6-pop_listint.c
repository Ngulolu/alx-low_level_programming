#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
  int n;
  listint_t *current;

  if(*head == NULL)
    return (0);

  n = (*head)->n;
  current = (*head)->next;
  free(*head);
  *head = current;

  return (n);
}
