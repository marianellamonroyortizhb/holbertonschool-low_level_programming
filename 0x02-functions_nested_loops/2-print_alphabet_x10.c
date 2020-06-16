#include "holberton.h"
/**
 *print_alphabet - Prints alphabet
 *
 */

void print_alphabet(void)
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

