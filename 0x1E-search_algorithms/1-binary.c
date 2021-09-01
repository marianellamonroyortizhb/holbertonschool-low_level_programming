#include "search_algos.h"
/**
 * binary_search - Function that searches for a value in a sorted
 * @print_array - Function that prints an array
 * @array: An array
 * @size: Array size
 * @value: Value to find
 * Return: Index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t two = 0, one = 0, three = 0;

	if (!array)
		return (-1);
	three = size - 1;

	while (one <= three)
	{
		two = (one + three)  / 2;
		print_array(array, three, one);

		if (array[two] < value)
			one = two + 1;
		else if (array[two] > value)
			three = two - 1;
		else
			return (two);
	}
	return (-1);
}

/**
 * print_array - Function that prints an array
 * @array: An array
 * @three: Integer
 * @one: Integer
 * Return: Prints an array
 */

void print_array(int *array, int three, int one)
{
	printf("Searching in array:");

	while (one <= three)
	{
		if (one == three)
			printf(" %d", array[one]);
		else
			printf(" %d,", array[one]);
		one++;
	}
	printf("\n");
}
