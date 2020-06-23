#include "holberton.h"
/**
 *print_rev - Print a string in reverse
 *
 *@str: Strign to evaluate
 *Return: 0 Success;
 */

void print_rev(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
