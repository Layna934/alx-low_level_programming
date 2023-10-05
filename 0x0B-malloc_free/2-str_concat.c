#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *str_concat - concatenates two strings
  *@s1: string one
  *@s2: string two
  *
  *Return: pointer to new string that contains s1 and s2
  */

char *str_concat(char *s1, char *s2)
{
    size_t length1 = strlen(s1);
    size_t length2 = strlen(s2);
    char *ptR12 = malloc((length1 + length2 + 1) * sizeof(char));

    if (s1 == NULL || s2 == NULL)
	    return NULL;

    if (ptR12 == NULL)
        return NULL;

    strcpy(ptR12, s1);
    strcat(ptR12, s2);

    return ptR12;
}
