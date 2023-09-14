#include "main.h"

/**
  *print_diagonal - prints diagonal lines in terminal
  *@n: number of times \will be printed
  *
  *Return: void
  */

void print_diagonal(int n)
{
	int p, u;

	p = 0;

	while (n > 0)
	{
		u = p;
		while (u > 0)
		{
			_putchar(' ');
			u--;
		}
		_putchar(92);
		_putchar('\n');
		p++;
		n--;
	}
	if (p < 1)
		_putchar('\n');
}
