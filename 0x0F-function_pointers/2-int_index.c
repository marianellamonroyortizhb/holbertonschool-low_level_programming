#include "function_pointers.h"

/**
 * int_index - return the indez of a element after to make a comparison.
 *
 * @array: input array.
 * @size: size of an array.
 * @cmp: pointer to fuction that compare an array.
 * Return: Depends on the comparison, counter or -1 it doesn't match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp && size > 0)
	{
		while (counter < size)
		{
			cmp(array[counter]);
			counter++;

			if (cmp(array[counter]))
			{
				return (counter);
			}
		}
	}
	return (-1);
}
