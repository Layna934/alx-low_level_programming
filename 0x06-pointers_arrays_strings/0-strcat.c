#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_strcat - cats 2 string using pointers
  *@dest: the destination
  *@src: the original
  *
  *Return: pointer to destinatiom
  */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (dest);
}
