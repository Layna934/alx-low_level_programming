#include <stdio.h>

/**
 * main - prints alphabets in reverse order
 *
 * Return: 0 on success
 */

int main(void)
{
	int l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
