#include "holberton.h"
#include <stdio.h>
/**
 *_isupper - Checks uppercase character.
 *Return: 1 or 0 depending on is uppercase or not.
 *@c: Character to evaluate
 */
int _isupper(int c)
{
	if ('A' <= c)
	{
		if (c <= 'Z')
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
