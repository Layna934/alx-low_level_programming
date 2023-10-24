#include "lists.h"
#include <stdlib.h>

/**
  *sum_listint - sums data of a list
  *@head: the list head
  *
  *Return: the sum
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
