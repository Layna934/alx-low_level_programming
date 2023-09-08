#include <stdio.h>

/**
 * main - prints single digit numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	int sing = 0;

	while (sing < 10)
	{
		printf("%d", sing);
		sing++;
	}
	printf("\n");
	return (0);
}
