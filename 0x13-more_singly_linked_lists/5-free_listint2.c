#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *free_listint2 - frees a list
 *@head: head mode
 *Return: void
 */

void free_listint2(listint_t **head)
{
  listint_t *current;

  for (current = *head; current != NULL; )
    {
      listint_t *next = current->next;
      free(current);
      current = next;
    }

  *head = NULL;
}
