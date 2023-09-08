#include <stdio.h>

/**
 * main - prints single digits without printf
 *
 * Return: 0 on success
 */

int main(void)
{
	int d = 0;

	while (d < 10)
	{
		putchar((d % 10) + '0');
		d++;
	}
	putchar('\n');
	return (0);
}
