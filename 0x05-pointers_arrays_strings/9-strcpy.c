#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_strcpy - copies string through pointer to new destination
  *@dest: the new destination\
  *@src: original string
  *
  *Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
