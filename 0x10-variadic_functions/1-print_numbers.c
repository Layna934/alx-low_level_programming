#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_numbers - prints numbers
  *@separator: string used to separate numbers
  *@n: number of arguments added by user
  *
  *Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, lastv = n - 1;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (i != lastv && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
