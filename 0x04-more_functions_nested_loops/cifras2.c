#include <stdio.h>
#include "holberton.h"
/**
*main - cifras
*Return: 0
*/

int main(void)
{
	int numero = 25631;
	int numero1 = numero;
	int cifras = 1;
	int div, u, c;

	printf("n = %d\n", numero);

	while (numero >= 10)
	{
		numero = numero / 10;


		if (numero <= 10)
		{
			u = numero1 % 10;
			_putchar(u);
			for (div = 1; div <= cifras; div++)
			{
				numero1 = numero1 / 10;
				c = numero1 / 10;
				_putchar(c);
			}

		}
		cifras++;
	}

	printf("Tiene %d cifras\n", cifras);

return (0);
}
