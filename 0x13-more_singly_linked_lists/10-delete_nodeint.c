#include  "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - deletes the node at index of a linked list. 
 *@head:
 *@index:
 *
 *Return: 1 if it is successful, -1 if failed 
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  listint_t *current, *previous;
  unsigned int i;

  if (head == NULL || head == NULL)
    return (-1);

  current = *head;
  previous = NULL;

  if (index == 0)
    {
      *head = current->next;
      free(current);
      return (1);
    }

  for (i = 0; i < index; i++)
    {
      if (current ==NULL)
	return (-1);
      previous = current;
      current = current->next;
    }

  if (current == NULL)
    return (-1);

  previous->next = current->next;
  free(current);

  return 1;
}
