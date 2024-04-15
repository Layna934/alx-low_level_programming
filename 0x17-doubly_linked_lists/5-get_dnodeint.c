#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at index
 *
 * @head: pointer to head of list
 * @index: index of node to ne gotten
 *
 * Return: pointer to node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
