#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create an array of characters.
 *@size: size of a unsigned integer
 *@c: character
 *Return: pointer ptr or NULL if fails or size is negative
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int i;

	ptr = (char *) malloc((size) * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < size; i++)

		{
			ptr[i] = c;
		}

		if (ptr != NULL)
		{
			return (ptr);
		}

		else
		{
			return (NULL);
		}

	}
}
