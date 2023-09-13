#include <stdio.h>

/**
 * main - print lowercase alphabets
 *
 * Return: 0 on success
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
