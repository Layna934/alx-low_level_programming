#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *array_range - creates an array of integters
  *@min: first value of the array
  *@max: last value of the array
  *
  *Return: pointer to the array
  */

int *array_range(int min, int max)
{
	int *ptR;
	int arrayLength = (max - min) + 1;
	int i;
	int index = max - min;

	if (min > max)
		return (NULL);
	ptR = malloc(sizeof(int) * arrayLength);
	if (ptR == NULL)
		return (NULL);
	else
		for (i = 0; i <= index; i++)
		{
			ptR[i] = min++;
		}
	return (ptR);
}
