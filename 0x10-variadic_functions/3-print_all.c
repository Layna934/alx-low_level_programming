#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 *print_all - prints all
 *@format: the format specifier
 *
 *Return: nothing
 */

void print_all(const char * const format, ...)
{
	int m = 0, length = strlen(format);
	va_list flist;

	va_start(flist, format);
	while (format[m] != '\0')
	{
		switch (format[m])
		{
			case 'c':	{char val = va_arg(flist, int);

					printf("%c", val);
					break; }
			case 'i':	{int val = va_arg(flist, int);

					printf("%d", val);
					break; }
			case 'f':	{float val = va_arg(flist, double);

						printf("%f", val);
						break; }
			case 's':	{char *val = va_arg(flist, char *);

					if (val == NULL)
						printf("(nil)");
					else
						printf("%s", val);
					break; }
			default:
				break;
		}
		m++;
		if ((m < length) && (format[m] == 'c' || format[m] == 'i' ||
					format[m] == 'f' || format[m] == 's'))
			printf(", ");
	}
	va_end(flist);
	printf("\n");
}
