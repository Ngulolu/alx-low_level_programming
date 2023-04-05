#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 *free_listint - frees a list
 *@head: head node
 *Return: void
 */

void free_listint(listint_t *head)
{

  listint_t *current;
  
  while (head != NULL)
    {
      current = head;

      head = head->next;

      free(current);
    }
}
