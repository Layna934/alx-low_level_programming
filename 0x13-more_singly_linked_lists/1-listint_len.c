#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *listint_len - function to return length of list
  *@h: particular list pointer
  *
  *Return: the calculated length
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
