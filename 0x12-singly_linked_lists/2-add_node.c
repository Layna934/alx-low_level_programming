#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *add_node - creates a new node at head
  *@str: the string
  *@head: pointer to the pointer to head
  *
  *Return: address of new node or NULL if failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
	{
		return (NULL);
	}
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
	new->next = *head;
	*head = new_node;
	return (new);
}
