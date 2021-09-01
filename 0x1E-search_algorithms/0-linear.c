#include "search_algos.h"

/**
 * linear_search - Find a value in an array
 * @array: array
 * @size: array size
 * @value: Value to find
 * Return: -1 or index
*/

int linear_search(int *array, size_t size, int value)
{
	size_t a_ind;

	if (!array)
		return (-1);
	for (a_ind = 0; a_ind < size; a_ind++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a_ind, array[a_ind]);
		if (array[a_ind] == value)
			return (a_ind);
	}
	return (-1);
}
