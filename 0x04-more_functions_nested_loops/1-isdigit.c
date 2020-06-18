#include "holberton.h"
#include <stdio.h>
/**
 *_isdigit - Checks if a character is a digit.
 *Return: 1 or 0 depending on is a digit or not.
 *@c: Character to evaluate
 */
int _isdigit(int c)
{
	if ('0' <= c)
	{
		if (c <= '9')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
	return (0);
	}
}
