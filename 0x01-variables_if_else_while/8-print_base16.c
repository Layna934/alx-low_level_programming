#include <stdio.h>

/**
 * main - prints base 16 numbers in lowercase
 *
 * Return: 0 on success
 */

int main(void)
{
	int num = 0;
	char let = 'a';

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	while (let <= 'f')
	{
		putchar(let);
		let++;
	}
	putchar('\n');
	return (0);
}
