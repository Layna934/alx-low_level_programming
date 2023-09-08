#include <stdio.h>

/**
 * main - prints both lower and upper cases
 *
 * Return: 0 on success
 */

int main(void)
{
	int l = 'a';
	int u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
