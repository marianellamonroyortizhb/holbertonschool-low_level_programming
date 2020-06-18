#include "holberton.h"
#include <stdio.h>
/**
 *more_numbers - print numbers 0-9
 *Return: number.
 *
 */
void more_numbers(void)
{
	int k, u, d;

	int c;

	for (k = 0; k < 10; k++)
	{
		for (c = 0; c < 15; c++)
		{
			u = c % 10;
			if (c >= 10)
			{
				d = c / 10;
				_putchar(d + '0');
			}
			_putchar(u + '0');
		}
		_putchar('\n');
	}
}
