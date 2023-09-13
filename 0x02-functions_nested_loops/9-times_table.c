#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: notjhing
 */

void times_table(void)
{
	int a = 0;

	while (a < 10)
	{
		int b = 0;

		while (b < 10)
		{
			int c = a * b;

			if ( c >= 10)
			{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			if (b < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			}
			else if (c < 10)
			{
				_putchar((c % 10) + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
