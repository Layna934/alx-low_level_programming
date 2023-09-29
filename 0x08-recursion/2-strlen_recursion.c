#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_strlen_recursion - counts length if string
  *@s: the string in question
  *
  *Return: the length
  */

/**int _strlen_recursion(char *s)
{
	int count = strlen(s);

	return (count);
}
*/

int _strlen_recursion(char *s)
{
	int count;

	if (*s != '\0')
	{
		int length = _strlen_recursion(s + 1);
		count = length + 1;
	}
	return (count);
}
