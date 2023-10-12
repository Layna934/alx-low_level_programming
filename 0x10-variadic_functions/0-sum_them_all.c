#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - function that sums variable amounts of arguments
  *@n: the counter/ mandatory argument
  *
  *Return: the summed value
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(list, int);
	}
	va_end(list);
	return (result);
}
