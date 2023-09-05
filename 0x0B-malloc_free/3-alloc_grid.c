#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - dynamically allocates a two-dimensional grid of integers
 * @width: desired width of the grid
 * @height: desired height of the grid
 *
 * Return: pointer to the allocated grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;
	int *memory_block;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int));
	if (grid == NULL)
		return (NULL);

	memory_block = (int *)malloc(width * height * sizeof(int));
	if (memory_block == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = memory_block + (i * width);
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
