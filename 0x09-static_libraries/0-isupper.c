#include "main.h"

/**
  *_isupper - checks for uppercase
  *@c: character that is checked
  *
  */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
