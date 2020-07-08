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

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	ptr = (int **) malloc(height * sizeof(int *));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	else
	{
		for (m = 0; m < height; m++)
		{
			ptr[m] = (int *) malloc(width * sizeof(int));

			if (!ptr[m])
			{
				for (n = 0; n < height; n++)
					free(ptr[m]);
				free(ptr);
				return (NULL);
			}
			else
			{
			for (n = 0; n < height; n++)
				ptr[m][n] = 0;
			}
		}
	}
	return (ptr);
	free(ptr);
}
