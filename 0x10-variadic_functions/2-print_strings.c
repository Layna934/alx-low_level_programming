#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_strings - prints strings
  *@separator: value used to separate said strings
  *@n: number of strings entered
  *
  *Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, lastv = n - 1;
	const char *str;
	va_list printString;

	va_start(printString, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(printString, const char *);
		if (str == NULL)
		{
			printf("nil");
			return;
		}
		else
		{
			printf("%s", str);
		}
		/**
		*if (i == lastv)
		*	printf("\n");
		*else
		*{
		*	if (separator == NULL)
		*		printf("%s", "");
		*	else
		*	{
		*		printf("%s", separator);
		*	}
		*}
		*/

		if (i < lastv && separator != NULL && separator[0] != '\0')
			printf("%s", separator);
	}
	printf("\n");
	va_end(printString);
}
