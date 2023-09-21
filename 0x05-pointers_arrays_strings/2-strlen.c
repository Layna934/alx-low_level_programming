#include "main.h"
#include <stdio.h>

/**
  *_strlen - counts string length
  *@s: pointer to string
  *
  *Return: the string lenth
  */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
