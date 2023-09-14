#include "main.h"
#include <stdio.h>

/**
  *main - prints 0-100 with a twist
  *
  *Return: 0
  */

int main(void)
{
	int p;
	char x[] = "Fizz";
	char y[] = "Buzz";
	char z[] = "FizzBuzz";

	for (p = 1; p <= 100; p++)
	{
		if (p % 5 == 0)
		{
			printf("%s ", y);
			if (p % 5 == 0 && p == 100)
				printf("%s\n", y);
		}
		else if (p % 3 == 0)
		{
			printf("%s ", x);
		}
		else if (p % 5 == 0 && p % 3 == 0)
		{
			printf("%s ", z);
		}
		else
			printf("%d ", p);
	}
	return (0);
}
