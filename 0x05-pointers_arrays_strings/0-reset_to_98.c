#include "holberton.h"
/**
 * reset_to_98 - using a pointer changes the value to 98.
 *
 * @n: input to the pointer.
 */

void reset_to_98(int *n)
{
	int num = 98;
	*n = num;
}
