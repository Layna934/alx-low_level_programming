#include "main.h"
/**
  *_isdigit - checks for single digits
  *@c: digit to be checked
  *
  *Return: 1 for sing digits, 0 for anything else
  */

int _isdigit(int c)
{
	if (c <= 57 && c >= 38)
		return (1);
	else
		return (0);
}
