#include "lists.h"

/**
 * sum_dlistint - returns sum of elemnts of a list
 *
 * @head: pointer to the first node
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
