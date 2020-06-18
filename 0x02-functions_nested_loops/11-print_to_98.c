#include "holberton.h"
/**
 *print_to_98 - Write until 98.
 *Return: Always 0.
 *@n: Variable u
 */

void print_to_98(int n)
{
	int d, u;

	d = 0;
	u = 0;
	for (n = 0; n <= 98; n++)
	{
		d = n / 10;
		u = n % 10;
		if (n < 10)
		{
			_putchar(' ');
			_putchar('0' + u);
			_putchar(',');
		}
		else if (n == 0)
		{
			_putchar('0');
			_putchar(',');
		}
		else if (n == 98)
		{
			_putchar(' ');
			_putchar('0' + d);
			_putchar('0' + u);
			_putchar('\n');
		}
		else
		{
			_putchar(' ');
			_putchar('0' + d);
			_putchar('0' + u);
			_putchar(',');
		}
	}
}
