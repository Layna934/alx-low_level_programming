#include "lists.h"
#include <stdlib.h>

/**
  *pop_listint - deletes head node
  *@head: head
  *
  *Return: node's data
  */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		current = *head;
		n = current->n;
		*head = current->next;
		free(current);
	}
	return (n);
}
