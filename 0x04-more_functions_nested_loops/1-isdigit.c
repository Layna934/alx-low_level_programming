#include "main.h"
#include <stdio.h>

/**
  *_isdigit - checks for single digit
  *@c: digit to be checked
  *
  *Return: 1 for single digit and 0 for anythinf else
  */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
