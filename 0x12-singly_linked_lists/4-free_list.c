#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
  list_t *current_node = head;
  list_t *next_node = NULL;

  for (; current_node != NULL; current_node = next_node)
    {
      next_node = current_node->next;
      free(current_node);
    }
}
