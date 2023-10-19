#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
  *print_list - prints lists of linked list
  *@h: the heas
  *
  *Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
