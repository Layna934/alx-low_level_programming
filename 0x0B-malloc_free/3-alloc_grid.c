#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *alloc_grid - returns pointer to 2D array
  *@width: width
  *@height: height
  *
  *Return: 2D pointer
  */

int **alloc_grid(int width, int height)
{
    int **grid = (int **)malloc(height * sizeof(int *));
    int i;
    int j;

    if (width <= 0 || height <= 0)
    {
	    return (NULL);
    }
    if (grid == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL)
	{
		int j;
            for (j = 0; j < i; j++)
	    {
                free(grid[j]);
            }
            free(grid);
            return (NULL);
        }

        for (j = 0; j < width; j++)
	{
            grid[i][j] = 0;
        }
    }

    return (grid);
}
