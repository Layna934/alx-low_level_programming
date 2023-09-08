#include <stdio.h>

/**
 * main - prints lowercase alphabets
 *
 * Return: 0 for success
 */

int main(void)
{
	int l;

	l = 'a';

	while (l <= 'z')
	{
		putchar(l);
	l++;
	}
	putchar('\n');
	return (0);
}
