#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *print_to_98 - prints all natural numbers
  *@n: beginning number
  *
  *Return: nothing
  */

  void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;

		if (n == 98)
			printf("%d\n", n);
		else if (n > 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
}
