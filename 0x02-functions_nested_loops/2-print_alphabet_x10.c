#include "holberton.h"
/**
 *print_alphabet_x10 - Prints alphabet
 *
 */

void print_alphabet_x10(void)
{
	char c;

	int i;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}

