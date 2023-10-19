#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *list_len - returns number of elements in a linked list
  *@h: the head of the list
  *
  *Return: list length
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
