#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *factorial - function to calculate factorial
  *@n: the integer whose factorial we're calcing
  *
  *Return: the factorial value
  */

int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	else if (n == 0)
		fact = 1;
	else
	{
		fact = n * factorial(n - 1);
	}

	return (fact);
}
