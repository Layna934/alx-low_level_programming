#include <stdio.h>

/**
 * print_alphabet - print lowercase alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		putchar(p);
		p++;
	}
	putchar('\n');
}
