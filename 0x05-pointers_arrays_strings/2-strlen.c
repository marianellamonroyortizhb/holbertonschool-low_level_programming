#include "holberton.h"
/**
 *_strlen - count the number of elements in a string
 *
 *@s: Strign to evaluate
 *Return: 0 Success;
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
