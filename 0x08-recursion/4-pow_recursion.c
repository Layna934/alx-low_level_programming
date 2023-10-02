#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_pow_recursion - prints one number to the po of another
  *@x: first number. the  base number
  *@y: second number. the power
  *
  *Return: x raised to y
  */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (1.0 / _pow_recursion(x, -y));
	else
	{
		int result = x * _pow_recursion(x, y - 1);

		return (result);
	}
}
