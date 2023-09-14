#include "main.h"
#include <stdio.h>

/**
  *_isupper - checks for uppercase
  *@c: charcater that is checked
  *
  *Return: 1 if upper and 0 if not
  */

int _isupper(int c)
{
	c = 65;

	if (c <= 90)
		return (1);
	else
		return (0);
}
