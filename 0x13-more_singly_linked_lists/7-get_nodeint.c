#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_nodeint_at_index - a function that gets node at index
 *@head: head node
 *@index: index node
 *Return; address of the index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *node = head;
  
for (i = 0; node != NULL && i < index; i++)
{
node = node->next;
}
return (node);
}
