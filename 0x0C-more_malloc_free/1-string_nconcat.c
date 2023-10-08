#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *string_nconcat - concatenates 2 strings
  *@s1: first string
  *@s2: second string
  *@n: number of charcters of second string appended
  *
  *Return: pointer to new space for cat copies
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptR;
	unsigned int s2Length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s2Length = strlen(s2);
	if (n >= s2Length)
		s2Length = s2Length;
	else if (n < s2Length)
		s2Length = n;
	ptR = malloc(strlen(s1) + s2Length + 1);
	if (ptR == NULL)
		return (NULL);
	else
	{
		strcpy(ptR, s1);
		strncat(ptR, s2, s2Length);
		return (ptR);
	}
}
