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
	unsigned int counter = 0;

	if (array && action && size > 0)
	{
		while (counter < size)
		{
			action(array[counter]);
			counter++;
		}
	}
}
