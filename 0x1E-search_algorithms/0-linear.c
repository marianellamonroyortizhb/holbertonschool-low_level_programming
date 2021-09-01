#include "search_algos.h"

/**
 * linear_search - Find a value in an array
 * @array: array
 * @size: array size
 * @value: value to find
 * Return: 0
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a_size;

	if (array)
	{
		for (a_size = 0; a_size < size; a_size++)
		{
		printf("Value checked array[%d] = [%d]\n", (int)a_size, array[a_size]);
		if (array[a_size] == value)
			return (a_size);
		}
	}
	return (-1);
}