#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 *@a: character
 *@n: integer
 */
void print_array(int *a, int n)
{
	int count = 0;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);

		if (count < n - 1)
			printf(", ");
	}
	printf("\n");
}
