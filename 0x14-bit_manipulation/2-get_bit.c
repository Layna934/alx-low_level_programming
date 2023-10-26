#include "main.h"
#include <stdio.h>

/**
  *get_bit - gets bit at specific index
  *@n: the whole bit
  *@index: the specific index
  *
  *Return: the value at the index or -1 if failed
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if ((index >= sizeof(unsigned long) * 8))
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
