#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *malloc_checked - function to allocate memory
  *@b: the size of the memory to be allocated
  *
  *Return: nothing
  */

void *malloc_checked(unsigned int b)
{
	void *ptR;
	ptR = malloc(b);
	if (ptR == NULL)
	{
		exit(98);
	}
	else
		return (ptR);
}
