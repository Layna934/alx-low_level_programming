#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 on Success
 */

int main(void)
{
	write(STDERR_FILENO,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
