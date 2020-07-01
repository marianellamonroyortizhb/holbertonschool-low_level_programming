#include "holberton.h"

/**
 * factorial - Prints the factorial of a number using the recursively way.
 *
 *@n: Number to evaluate
 * Return: 1 if it's zero, -1 if is less of zero or the factorial.
 */

int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}

	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}


}
