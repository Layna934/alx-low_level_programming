#include "main.h"
#include <stdio.h>

/**
  *print_numbers - prints numbers from 0 to 9
  *
  *Return: void
  */

void print_numbers(void)
{
	int p = 48;

	for (p = 48; p < 58; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
