#include "holberton.h"
/**
 *puts2 - Print a string avoiding the next character.
 *
 *@str: Strign to evaluate
 *Return: 0 Success;
 */

void puts2(char *str)
{
	int i;

	while (str[i])
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
