#include <stdio.h>

/**
 * main - prints lowercase letter except q and e
 *
 * Return: 0 on success
 */

int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		if (l != 'q' && l != 'e')
			putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
