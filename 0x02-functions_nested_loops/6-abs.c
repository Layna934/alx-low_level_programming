#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an interger
 *@p: the integer computed
 *
 * Return:absolute value or main interger
 */

int _abs(int p)
{
	if (p < 0)
	{
		int abs = p * -1;

		return (abs);
	}
	else
		return (p);
}
