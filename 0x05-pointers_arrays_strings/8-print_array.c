#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *print_array - prints a whole array
  *@a: the name of the array
  *@n: the number of elements in the array
  *
  *Return: void
  */

void print_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;

	while (first < last)
	{
		printf("%d, ", a[first]);
		first++;

		if (first == last)
			printf("%d", a[first]);
	}
	printf("\n");
}
