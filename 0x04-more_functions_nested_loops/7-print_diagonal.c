#include "holberton.h"
#include <stdio.h>
/**
 *print_diagonal - print a diagonal
 *@n: Set number of lines.
 */
void print_diagonal(int n)
{
	int i = 1;
	int j = 1;
	while (i <= n)
	{
		while (j <= n)
		{
			_putchar(n);
			j++;
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
}
