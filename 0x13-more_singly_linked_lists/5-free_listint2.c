#include "lists.h"
#include <stdlib.h>

/**
  *free_listint2 - frees list and sets head to null
  *@head: the head
  *
  *Return: nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
