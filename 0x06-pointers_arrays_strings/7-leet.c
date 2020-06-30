#include "holberton.h"
#include <stdio.h>

/**
 *string_toupper - changes lowercase to uppercase.
 *@s: source array
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	int n;

	for (n = 0; s[n]; n++)
	{
		if (s[n] == 'a' || s[n] == 'A')
		{
			s[n] = '4';
		}
		else if(s[n] == 'e' || s[n] == 'E')
                {
                        s[n] = '3';
                }
		else if(s[n] == 'o' || s[n] == 'O')
		{
			s[n] = '0';
                }
		else if(s[n] == 't' || s[n] == 'T')
		{
			s[n] = '7';
                }
		else if(s[n] == 'l' || s[n] == 'L')
		{
			s[n] = '1';
                }
	}
	return (s);
}
