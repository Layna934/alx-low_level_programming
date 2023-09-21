#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *print_rev - prints reverse string
  *@s: the string
  *
  *Return: void
  */

void print_rev(char *s)
{
	int len = strlen(s);
	int count;

	for (count = len; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
