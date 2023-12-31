#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_strdup - returns pointer to new memory space holding copied string
  *@str: original string to bve copied
  *
  *Return: new space pointer
  */

char *_strdup(char *str)
{
	size_t length = strlen(str) + 1;
	size_t count;
	char *ptRstr = malloc(length * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (ptRstr == NULL)
		return (NULL);

	for (count = 0; count < length; count++)
	{
		*(ptRstr + count) = *(str + count);
	}
	return (ptRstr);
}
