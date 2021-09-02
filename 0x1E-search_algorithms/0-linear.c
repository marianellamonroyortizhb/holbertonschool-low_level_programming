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
	size_t a;

	if (array == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}