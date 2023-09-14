#include "main.h"
#include <stdio.h>

/**
  *more_numbers - prints 0-14 ten times on ten different
  *lines
  *
  *Return: void
  */

void more_numbers(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
		a++;
	}
}
