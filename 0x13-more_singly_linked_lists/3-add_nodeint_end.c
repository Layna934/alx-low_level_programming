#include "lists.h"
#include <stdlib.h>

/**
  *add_nodeint_end - adds new node to list end
  *@head: head of list
  *@n: member of list in the new node
  *
  *Return: the address or NULL, if failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *current = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	newNode->next = NULL;
	newNode->n = n;

	return (newNode);
}
