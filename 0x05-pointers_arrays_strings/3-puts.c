#include "main.h"
#include <stdio.h>

/**
  *_puts - prints a string with new line to stdout
  *@str: I'm guessing it's the string to be printed
  *
  *return: void
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
