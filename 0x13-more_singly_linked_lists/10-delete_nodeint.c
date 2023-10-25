#include "lists.h"
#include <stdlib.h>

/**
  *delete_nodeint_at_index - deleats node at index\
  *@head: pointer to head
  *@*head: the head?
  *@index: index
  *
  *Return: 1 for success, -1 for failure
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		temp = current;
		current = current->next;

		if (current == NULL)
			return (-1);
	}
	temp->next = current->next;
	free(current);
	return (1);
}
