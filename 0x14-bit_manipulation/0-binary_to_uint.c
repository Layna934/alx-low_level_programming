#include "main.h"
#include <stdio.h>

/**
  *binary_to_uint - changes binary string to unint
  *@b: the string
  *
  *Return: the unsigned int value
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			result = result * 2 + (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (result);
}
