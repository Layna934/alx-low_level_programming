#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_strncat - concatenates 2 strings using at mos n bytes
  *@dest: desination
  *@src: origin
  *@n: number of bytes
  *
  *Return: the string dest's pointer
  */

char *_strncat(char *dest, char *src, int n)
{
	int bytes;

	while (*src != '\0')
	{
		src++;
	}
	while (*dest != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	bytes = strlen(src);

	if (bytes < n)
	{
		*dest = '\0';
	}

	return (dest);
}
