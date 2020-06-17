#include "holberton.h"
/**
 *times_table - Print multiplication table
 *
 */

void times_table(void)
{
	int i, j, u, d, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			d = n / 10;
			u = n % 10;
			if (n < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + u);
			}

			else
			{
				_putchar(' ');
				_putchar('0' + d);
				_putchar('0' + u);
			}
			if (j != 9)
			{
			_putchar(',');
			}
		}
		_putchar('\n');
	}
}
