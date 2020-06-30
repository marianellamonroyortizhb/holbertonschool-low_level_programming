#include "holberton.h"
#include <stdio.h>

/**
 *cap_string - Capitalize a string.
 *@s: source array
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int delimit[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
			   ')', '{', '}'};

	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		for (j = 0; j <= 13; j++)
		{
			if (s[i - 1] == delimit[j] && s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
