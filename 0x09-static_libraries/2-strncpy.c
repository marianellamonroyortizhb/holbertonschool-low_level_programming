#include "holberton.h"

/**
 *_strncpy - Copy a string
 *
 *Return: dest. Contatened string
 *@dest: string destination
 *@src: string source
 *@n: number of integers to copy.
 */

char *_strncpy(char *dest, char *src, int n)
{
/*	int sizedest = 0; */

	int i = 0;


/*
 *	while (dest[sizedest])
 *	{
 *		sizedest++;
 *	}
*/

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
