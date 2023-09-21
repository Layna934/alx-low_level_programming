#include "main.h"
#include <stdio.h>

/**
  *puts2 - prints other characters of a string
  *@str: string in question
  *
  *Return: void
  */

void puts2(char *str)
{
	int start = 0;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start += 2;
	}
	_putchar('\n');
}
