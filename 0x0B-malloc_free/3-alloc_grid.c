#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: size of matriz
 *@height: size of matriz
 *Return: pointer ptr or NULL if fails or size variables are less than one
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;

	int m, n;

	ptr = (int **) malloc(width * sizeof(int *));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	else
	{
		for (m = 0; m < width; m++)

		{
			ptr[m] = (int *) malloc(height * sizeof(int));

			if (!ptr)
			{
				free(ptr);
				return (NULL);
			}

			for (n = 0; n < width; n++)
				ptr[m][n] = 0;
		}
/*
 *		if (ptr != NULL)
 *		return (ptr);
 */
	}
	return (ptr);
}
