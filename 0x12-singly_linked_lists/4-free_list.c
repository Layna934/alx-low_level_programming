#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  *free_list - frees created list
  *@head: the head
  *
  *Return: nothing
  */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
