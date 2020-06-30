#include "holberton.h"
#include <stdio.h>

/**
 *string_toupper - changes lowercase to uppercase.
 *@s: source array
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int n;

	for (n = 0; s[n]; n++)
	{
		if ((s[n] >= 'a') && (s[n] <= 'z'))
		{
			s[n] = s[n] - 32;
		}
	}
	return (s);
}
