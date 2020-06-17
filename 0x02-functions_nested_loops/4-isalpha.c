#include "holberton.h"
/**
 *_isalpha- Determine if the char is in lowercase
 *Return: 1 if is lowercase, zero in another case
 * @c: data to examinate
 */

int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
		else
		{
			return (0);
		}
	return (0);
}
