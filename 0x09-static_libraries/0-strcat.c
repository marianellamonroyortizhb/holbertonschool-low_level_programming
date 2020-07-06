#include "holberton.h"
/**
 *_strcat - Concatenate two strings.
 *
 * Return: dest. Contatened string
 *@dest: string destination
 *@src: string source
 */
char *_strcat(char *dest, char *src)
{
	int i, sizedest;

	i = 0;

	sizedest = 0;

	while (dest[sizedest])
	{
		sizedest++;
	}

	for (i = 0; i <= sizedest && src[i] != '\0'; i++)
	{
		dest[sizedest + i] = src[i];
	}
	dest[sizedest + i] = '\0';

	return (dest);
}
