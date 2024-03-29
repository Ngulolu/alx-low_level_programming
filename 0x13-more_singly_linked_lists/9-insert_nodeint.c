#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a next node at a given position
 *@head; pointer to the head of the linked list 
 *@idx: index of the list where the next node should be added
 *@n: value to be stored in the next node
 *
 *Return: the address of the next node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
  listint_t *next_node, *current_node = *head;
  size_t i;


/* Allocate memory for the current node */

next_node = malloc(sizeof(listint_t));

 if (next_node == NULL)
   return NULL;

 next_node->n = n;


/* Insert at the beginning of the list */

if (idx == 0)
  {

    next_node->next = *head;
    *head = next_node;
    return next_node;
  }

/* Traverse the list until we reach the insertion point */

for (i = 0; i < idx - 1; i++)
  {
    if (current_node == NULL)
      return NULL;
    current_node =current_node->next;
  }

if (current_node == NULL)
  return NULL;

/* Insert the new node into the list */
next_node->next = current_node->next;
current_node->next = next_node;

return next_node;
}
