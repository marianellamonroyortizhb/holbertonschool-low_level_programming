#include "holberton.h"
#include <stdio.h>
/**
 *print_triangle - print a triangle
 *@size: size of the square.
 *
 */
void print_triangle(int size)
{
	int i = 0, j;

	if (size < 0)
		_putchar('\n');

	while (i < size)
	{
		j = 0;
		while (j < size)
		{

			if (j >= (size - 1 - i))
			{
				_putchar('#');
			}
			else
			{
				_putchar (' ');
			}
			j++;
		}
		putchar('\n');
		i++;
	}
	_putchar('\n');
}
