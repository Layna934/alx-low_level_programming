#include "lists.h"
#include <stdlib.h>

/**
  *get_nodeint_at_index - does that
  *@head: the head
  *@index: the index number
  *
  *Return: pointer to the nod at index
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; i < index; i++)
	{
		current = current->next;

		if (current == NULL)
			return (NULL);
	}
	return (current);
}
