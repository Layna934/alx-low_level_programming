#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *rev_string - reverses a string
  *@s: string to be reversed
  *
  *Return: void
  */

void rev_string(char *s)
{
	int len = strlen(s);
	int first = 0;
	int last = len - 1;
	int temp;

	while (first < last)
	{
		temp = s[first];
		s[first] = s[last];
		s[last] = temp;
		first++;
		last--;
	}
}
