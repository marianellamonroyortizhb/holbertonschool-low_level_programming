#include "holberton.h"
#include <stdio.h>

/**
 *leet - decodes specific elements in a string
 *@s: source array
 *
 * Return: The string s decoded.
 */
char *leet(char *s)
{
	int n, m;

	char lower[] = "aeotl";
	char upp[] = "AEOTL";
	char decod[] = "43071";

	for (n = 0 ; s[n]; n++)

		for (m = 0; lower[m]; m++)

			if (s[n] == lower[m] || s[n] == upp[m])
			{
				s[n] = decod[m];
			}
	return (s);
}
