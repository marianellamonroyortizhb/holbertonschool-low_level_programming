#include "holberton.h"
int pow_n(int a, int b);
/**
 *_sqrt_recursion - Find the root of a number
 *@n: number to evaluate
 *Return: root of a number
 */

int _sqrt_recursion(int n)
{
	return (pow_n(n, 1));
}

/**
 *pow_n - Prints a strign recursively
 *
 *@a: number
 *@b: sqrt of a number
 *Return: Evaluate the root
 */

int pow_n(int a, int b)
{
	int mult;

	mult = b * b;

	if (mult < a)
	{
		return (pow_n(a, b + 1));
	}
	else if (mult == a)
	{
		return (b);
	}
	else
	{
		return (-1);
	}
}
