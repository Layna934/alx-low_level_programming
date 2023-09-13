#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *@p: last digit
 *
 * Return: the last digit
 */

int print_last_digit(int p)
{
	int lastd = p % 10;

	if (lastd < 0)
	{
		lastd = lastd * -1;
	}
	_putchar(lastd + '0');

	return (lastd);
}
