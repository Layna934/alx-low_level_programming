#include "lists.h"

/**
 * print_dlistint - prints all  elements of a doubly linked list
 *
 * @h: the head pointer of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
