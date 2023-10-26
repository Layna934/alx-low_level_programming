#include "main.h"
#include <stdio.h>

/**
  *flip_bits - returns number of bits needed to flip numbers
  *@n: first number
  *@m: second number
  *
  *Return: the number of bits needed
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result > 0)
	{
		count = count + (result & 1);
		result >>= 1;
	}
	return (count);
}
