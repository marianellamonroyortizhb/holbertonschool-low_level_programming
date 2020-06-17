#include "holberton.h"
/**
 *print_alphabet_x10 - Prints alphabet
 *
 */

void print_alphabet_x10(void)
{
	int k;

	char c;

	for (k = 0; k < 10; k++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
