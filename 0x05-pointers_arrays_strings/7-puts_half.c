#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *puts_half - prints second half of string
  *@str: entire string
  *
  *Return: void
  */

void puts_half(char *str)
{
	int length_of_the_string = strlen(str);

	if (length_of_the_string % 2 == 1)
	{
		int n = (length_of_the_string + 1) / 2;
		int first;

		for (first = n; first < length_of_the_string; first++)
		{
			_putchar(str[first]);
		}
	} else if (length_of_the_string % 2 == 0)
	{
		int n = length_of_the_string / 2;
		int first;

		for (first = n; first < length_of_the_string; first++)
		{
			_putchar(str[first]);
		}
	}
	_putchar('\n');
}
