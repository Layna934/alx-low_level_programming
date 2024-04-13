#include "lists.h"

/**
 * add_dnodeint - adds a new node to doubly linked list beginniing
 *
 * @head: double pointer to the head of list
 * @n:: element to be added
 *
 * Return: ppointer to new list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	(*head) = new;
	return (*head);
}
