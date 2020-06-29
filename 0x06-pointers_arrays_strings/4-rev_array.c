#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array with a size n
 *@a: source array
 *@n: size array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int aux;
	int var_in, var_end;

	var_in = 0;
	var_end = n - 1;

	while (var_in < var_end)
	{
		aux = a[var_in];
		a[var_in] = a[var_end];
		a[var_end] = aux;
		var_in++;
		var_end--;
	}
}
