#include "holberton.h"
/**
 *print_alphabet_x10 - Prints alphabet
 *
 */

void print_alphabet_x10(void)
{
	char c;

	int k;

	for (k = 0; k <= 9; k++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

