#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *add_node_end - adds node at list end
  *@head: the head
  *@str: the tsring to be added
  *
  *Return: address of new element or NULL for fail
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		if (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new;
	}
	return (new);
}
