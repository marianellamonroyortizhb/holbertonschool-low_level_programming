#include <stdio.h>
#include "holberton.h"
/**
 *print_number - print integer with putchar
 *@n: integer
 */
void print_number(int n)
{
	int cociente, divisor, contador;

	int d, dig;

	cociente = 0;
	divisor = 1;
	contador = 0;

	while (cociente != 1)
	{
		contador++;
		divisor = divisor * 10;
		cociente = n / divisor;
		printf("%d", contador);
	}
	printf("%d", contador);

	d = 10;

	do {
		dig = n % d;
		_putchar(dig + '0');
		n = n / d;
		_putchar('\n');

	} while ((n / d) > 0);

}
