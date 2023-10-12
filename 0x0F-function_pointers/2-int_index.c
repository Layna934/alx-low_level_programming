#include "function_pointers.h"

/**
  *int_index - compares array values and returns first integer's index
  *@array: the array
  *@size: the size of array
  *@cmp: the function pointer
  *
  *Return: the index of first first integer
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size == 0)
		return (-1);

	while (i < size)
	{
		cmp(array[i]);
		i++;
	}
	return (i);
}
