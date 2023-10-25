#include "lists.h"
#include <stdlib.h>

/**
  *insert_nodeint_at_index - inserts node at index
  *@head: pointer to head of list
  *@idx: the index
  *@n: the n of the list
  *
  *Return: new node pointer or NULL
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *current = *head;
	listint_t *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; i < idx; i++)
	{
		if (current == NULL)
			return (NULL);

		temp = current;
		current = current->next;
	}
		temp->next = newNode;
		newNode->next = current;
		return (newNode);
}
