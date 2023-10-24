#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
  *print_listint - prints the elements of list
  *@h: the list pointer
  *
  *Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
