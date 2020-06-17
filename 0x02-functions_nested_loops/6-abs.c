#include "holberton.h"
/**
 *_abs - Determine the absolute value
 *Return: absolute value of a integer
 * @n: integer to examinate
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
