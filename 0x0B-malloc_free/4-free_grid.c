#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: size of matriz
 *@height: size of matriz
 *Return: pointer ptr or NULL if fails or size variables are less than one
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m <= height; m++)
	{
		free(grid[m]);
	}

	free(grid);
}
