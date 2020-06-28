#include "holberton.h"
/**
 *_strncat - Concatenate two strings with the same size that the source string.
 *
 * Return: dest. Contatened string
 *@dest: string destination
 *@src: string source
 *@n: number of integers to concatened.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int sizedest = 0;

	n = 0;

	while (dest[sizedest])
	{
		sizedest++;
	}


	for (i = 0; i <= n && src[i] != '\0'; i++)
	{
		dest[sizedest + i] = src[i];
	}
	dest[sizedest + i] = '\0';

	return (dest);
}
