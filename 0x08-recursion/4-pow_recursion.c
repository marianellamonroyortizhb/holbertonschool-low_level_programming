#include "holberton.h"

/**
 * _pow_recursion - Prints the factorial of a number using the recursively way.
 *
 *@x: Base
 *@y: Exponent
 * Return: 1 if it's zero, -1 if is less of zero or the factorial.
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y >= 1)
	{
		result = x * (_pow_recursion(x, y - 1));
		return (result);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (-1);
	}
}
