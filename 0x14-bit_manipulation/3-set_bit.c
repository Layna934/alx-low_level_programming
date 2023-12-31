#include "main.h"
#include <stdio.h>

/**
  *set_bit - sets bit at given index
  *@n: address of bit
  *@index: given index
  *
  *Return: 1 for success, -1 for fail
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n |= (1ul << index);
	return (1);
}
