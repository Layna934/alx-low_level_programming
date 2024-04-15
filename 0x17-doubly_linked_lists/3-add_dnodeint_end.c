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
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));
	if (head->next != NULL)
	{
		head = head->next;
	}
	else
	{
		head->next = new;
		new->prev = head;
		new->next = NULL;
		head = new;
	}
	return (*head);
}
