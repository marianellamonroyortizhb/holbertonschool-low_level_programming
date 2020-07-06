#include "holberton.h"
/**
 *_puts - Print a string
 *
 *@str: Strign to evaluate
 *Return: 0 Success;
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
