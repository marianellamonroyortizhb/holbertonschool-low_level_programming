#include "holberton.h"
#include <stdio.h>
/**
 *print_diagonal - print a diagonal
 *@n: Set number of lines.
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 1;
	while (i < n)
	{
		if (n > 0)
		{	while (j <= n)
		{
			_putchar(' ');
			j++;
		}
			_putchar(92);
			_putchar('\n');
		}
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
