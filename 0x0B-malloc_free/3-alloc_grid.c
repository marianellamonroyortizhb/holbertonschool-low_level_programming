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
	int m = 0;
	int n = 0;


	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(height * sizeof(int *));

	if (!ptr)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		ptr[m] = (int *) malloc(width * sizeof(int));

		if (!ptr[m])

		{
			for (n = 0; n <= m; n++)
				free(ptr[m]);

			free(ptr);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{

		for (n = 0; n < width; n++)
			ptr[m][n] = 0;
	}

	return (ptr);
}
