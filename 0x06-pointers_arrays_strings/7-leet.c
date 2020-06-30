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
	int n, m;

	char lower[] = "aeotl";
	char upp[] = "AEOTL";
	char decod[] = "43071";

	for (n = 0 ; s[n]; n++)

		for (m = 0; lower[m]; m++)

			if (s[n] == lower[m])
			{
				s[n] = decod[m];
			}
			else if (s[n] == upp[m])
			{
				s[n] = decod[m];
			}
	return (s);
}
