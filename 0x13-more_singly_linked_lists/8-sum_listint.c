#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*sum_listint - returns the sum of all data (n) of a linked list
*@head: pointer to the first node of the list
*
*Return: sum of all data in the list, or 0 if null
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current;

if (head == NULL)
return 0;

current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}
return sum;
}
