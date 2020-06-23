#include "holberton.h"
/**
 *print_rev - Print a string in reverse
 *
 *@s: Strign to evaluate
 *Return: 0 Success;
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

