#include "main.h"
#include <stdio.h>

/**
  *print_line - prints lines in the terminal
  *@n: number of _ that makes up line
  *
  *Return: void
  */

void print_line(int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		_putchar(95);

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
