#include <stdarg.h>
/**
 * sum_them_all - sum all the integer arguments
 *
 * @n: input integer
 * Return: Always
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int suma;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		suma += va_arg(args, int);
	}

	va_end(args);

	return (suma);
}
