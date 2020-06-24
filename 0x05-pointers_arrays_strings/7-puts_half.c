#include "holberton.h"
/**
 *puts_half - Print a string avoiding the next character.
 *
 *@str: Strign to evaluate
 *Return: 0 Success;
 */

void puts_half(char *str)
{
	int i = 0;
	int istart, j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{

		istart = i / 2;
	}

	else
	{
		istart = (i - 1) / 2;
	}

	for (j = istart; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
