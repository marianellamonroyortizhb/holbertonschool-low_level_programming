#include "holberton.h"
/**
 *puts_half - Print a string avoiding the next character.
 *
 *@str: String to evaluate
 *Return: 0 Success;
 */

void puts_half(char *str)
{
	int i;
	int istart;

	while (str[i])
	{
		i++;
	}

	if (i % 2 == 1)
	{
		istart = (i - 1) / 2;
		istart = i - 1;

	}
	else
	{
		istart = i / 2;
	}

	for (; str[istart]; istart++)
	{
		_putchar(str[istart]);
	}
	_putchar('\n');
}
