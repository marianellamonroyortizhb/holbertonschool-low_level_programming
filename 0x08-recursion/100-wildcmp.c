#include "holberton.h"
#include <stdio.h>
/**
 *_strlen_recursion - Prints the lenght of a strign
 *
 *@s: Strign to evaluate
 *Return: i number of elements of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;

		return (_strlen_recursion(s) + 1);
	}

	else
	{
		return (0);
	}
}
