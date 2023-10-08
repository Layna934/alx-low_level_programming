#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_calloc - allocates meomory and initializes to 0
  *@nmemb: nuymber of elements
  *@size: size in bytes of each element
  *
  *Return: nothing
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptR;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptR = malloc(size * nmemb);
	if (ptR == NULL)
		return (NULL);
	else
	{
		memset(ptR, 0, size*nmemb);
		return (ptR);
	}
}
