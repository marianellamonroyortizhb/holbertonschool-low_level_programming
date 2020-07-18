#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints all the strings.
 *
 * @n: input integer that is the number of string.
 * @separator: string that separate the arguments.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *vtoprint = va_arg(args, char*);

		if (vtoprint[i] != '\0')
		{
			printf("%s", vtoprint);
		}
		else
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
