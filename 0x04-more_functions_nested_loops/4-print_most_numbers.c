#include "main.h"
#include <stdio.h>

/**
  *print_most_numbers - prints single digits except 4 and 9
  *
  *Return: void
  */

void print_most_numbers(void)
{
	int p;

	for (p = 48; p <= 57; p++)
	{
		if (p != 50 && p != 52)
		{
			_putchar(p);
		}
	}
	_putchar('\n');
}
