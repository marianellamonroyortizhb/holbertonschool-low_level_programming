#include <stdio.h>

/**
 * array_iterator - execute a function in each array.
 *
 * @array: input array.
 * @size: size of an array.
 * @action: action definition.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
