#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *add_nodeint - adds node new
  *@head: the head of link we're adding it to
  *@n: the n we're supposed to put in the list
  *
  *Return: the address of the new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
