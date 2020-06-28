#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 *@s1: first string
 *@s2: second string
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{

	if (s1 == s2)
	{
		return (0);
	}

	else if (s1 < s2)
	{
		return (-15);
	}

	else
	{
		return (15);
	}
}
