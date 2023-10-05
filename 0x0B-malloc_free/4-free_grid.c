#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *free_grid - frees 2D grid
  *@grid: grid to be freed
  *@height: height
  *
  *Return: void
  */

void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
		free(grid[f]);
}
