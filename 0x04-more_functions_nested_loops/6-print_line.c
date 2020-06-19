#include "holberton.h"
#include <stdio.h>
/**
 *print_numbers - print numbers 0-9
 *Return: number.
 *
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
