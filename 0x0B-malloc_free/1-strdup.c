#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - duplicate an string.
 *@str: string to duplicate
 *
 *Return: pointer ptr or NULL if fails or size is negative
 */

char *_strdup(char *str)
{
	char *strcp = NULL;

	int len, i;

	if (!str)
	{
		return (NULL);
	}

	for (len = 1; str[len - 1]; len++)
	{
		;
	}

	strcp = (char *) malloc((len) * sizeof(char));

	if (!strcp)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		strcp[i] = str[i];
	}

	strcp[i] = '\0';

	return (strcp);
}
