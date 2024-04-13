#include "lists.h"

/**
 * dlistint_len - returns number of elements in list
 *
 * @h: head of list
 *
 * Return: number off elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
