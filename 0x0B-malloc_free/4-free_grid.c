#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees a 2 dimonsional grid
 * @grid: pointer to a pointer to an int
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
