#include "function_pointers.h"

/**
  *array_iterator - iterates through and array
  *@array: the array
  *@size: the size of the array
  *@action: the function pointer
  *
  *Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
