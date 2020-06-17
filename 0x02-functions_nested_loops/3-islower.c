#include "holberton.h"
/**
 *_islower- Determine if the char is in lowercase
 *Return: 1 if is lowercase, zero in another case
 * @c: data to examinate
 */

int _islower(int c)
{
	if ('a' <= c)
	{
		if (c <= 'z')
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
