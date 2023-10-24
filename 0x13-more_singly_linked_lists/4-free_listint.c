#include "lists.h"
#include <stdlib.h>

/**
  *free_listint - frees list
  *@head: the head of the list
  *
  *Return: nothing
  */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
