#include "lists.h"
/**
 * add_dnodeint_end - adds anew node at end of doubly linked list
 *
 * @head: pointer to the pointer to the list
 * @n: the n element to the added
 *
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	temp = (*head);
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
		*head = new;
	new->prev = temp;
	temp = new;
	return (temp);
}
