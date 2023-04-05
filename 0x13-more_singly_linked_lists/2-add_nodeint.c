#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint
 *Return: pointer to node
 *@head: head node
 *@n:new node data
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
  listint_t *new_node = malloc(sizeof(listint_t));
  if (new_node == NULL) {
    return NULL;
  }
  new_node->n = n;
  new_node->next = NULL;

  if (*head == NULL) {
    *head = new_node;
  } else {
    listint_t *prev_node = NULL;
    listint_t *current_node = *head;
    for (; current_node != NULL; prev_node = current_node, current_node = current_node->next) {
      /* do nothing */
    }
    prev_node->next = new_node;
  }

  return new_node;
}
