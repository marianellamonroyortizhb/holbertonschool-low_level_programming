#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints all the integer arguments
 *
 * @n: input integer
 * @separator: string that separate the arguments
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int vtoprint = va_arg(args, int);

		if (args != NULL)
		{
			printf("%d", vtoprint);
		}
		else if (args == NULL)
		{
			printf("(nil)");
		}
			if (separator != NULL && i != (n - 1))
			{
				printf("%s", separator);
			}
	}
	printf("\n");
	va_end(args);
}
