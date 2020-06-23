#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - change two integers using pointers.
 * @a: number one
 * @b: number two
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
