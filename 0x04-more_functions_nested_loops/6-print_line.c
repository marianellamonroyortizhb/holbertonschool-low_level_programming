#include "holberton.h"
#include <stdio.h>
/**
 *print_line - print numbers 0-9
 *@n: Set number of lines.
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
