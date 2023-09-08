#include <stdio.h>

/**
 * main - ppp
 *
 * Return: 0 on success
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar((num % 10) + '0');
		num++;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
