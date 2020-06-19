#include "holberton.h"
#include <stdio.h>
/**
 *print_square - print numbers 0-9
 *@size: size of the square.
 *
 */
void print_square(int size)
{
	int j, k;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
