#include "holberton.h"

/**
 *_strcpy - check the code for Holberton School students.
 *
 *@dest: string destination
 *@src: string source
 *Return:
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
/*	dest [i] = src [i]; */
	return (dest);
}
