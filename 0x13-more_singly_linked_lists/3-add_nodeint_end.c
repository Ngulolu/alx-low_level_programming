#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *add_nodeint_end - add new node to the list at end
 *@head: head node
 *@n: node data
 *Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *new_node;

  new_node = malloc(sizeof(listint_t));
  if (new_node == NULL)
    {
      return NULL;
    }

  new_node->n = n;
  new_node->next = NULL;

  if (*head == NULL)
    {
      *head = new_node;
    }
  else
    {
      listint_t *current = *head;
      for (; current->next != NULL; current = current->next)
	{
	  /* do nothing */
	}
  current->next = new_node;
    }
  return new_node;
}
