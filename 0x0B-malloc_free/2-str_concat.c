#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenate two strings.
 *@s1: first string
 *@s2: second string
 *Return: pointer ptr or NULL if fails or size is negative
 */
char *str_concat(char *s1, char *s2)
{
	char *sconcat = NULL;
	int s1len, s2len, finalsize, n, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1len = 1; s1[s1len - 1]; s1len++)
		;
	for (s2len = 1; s2[s2len - 1]; s2len++)
		;
	finalsize = s1len + s2len - 1;
	sconcat = malloc((finalsize) * sizeof(char));

	if (sconcat == NULL)
		return (NULL);

	for (n = 0; s1[n]; n++)
		sconcat[n] = s1[n];

	for (m = 0; s2[m]; m++)
		sconcat[m + n] = s2[m];

	sconcat[m + n] = '\0';

	return (sconcat);
}
