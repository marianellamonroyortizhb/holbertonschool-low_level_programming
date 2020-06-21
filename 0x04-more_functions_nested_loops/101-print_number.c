#include <stdio.h>
#include "holberton.h"
/**
 *print_number - print integer with putchar
 *@n: integer
 */
void print_number(int n)
{
	int d, dig;

	d = 10;

	do {
		dig = n % d;
		_putchar(dig + '0');
		n = n / d;
	} while ((n / d) > 0)


	_putchar('\n');
}
