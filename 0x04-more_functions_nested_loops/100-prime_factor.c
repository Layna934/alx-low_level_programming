#include "main.h"
#include <stdio.h>
#include <math.h>

/**
  *main - finds lArgest prime factor
  *
  *Return:0 on success
  */

int main(void)
{
	int p;
	long dig = 612852475143;

	for (p = (int) sqrt(dig); p > 2; p++)
	{
		if (dig % p == 0)
		{
			printf("%d\n", p);
			break;
		}
	}

	return (0);
}
