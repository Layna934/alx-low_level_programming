#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *create_array - creates an array of characters
  *@size: number of array elements
  *@c: specific character to be found in each element space
  *
  *Return: pointer to array or NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	char *ptR = malloc(size * sizeof(char));
	unsigned int count;

	for (count = 0; count < size; count++)
	{
		*(ptR + count) = c;
	}
	if (size > 0)
		return (ptR);
	else
		return (NULL);
}
