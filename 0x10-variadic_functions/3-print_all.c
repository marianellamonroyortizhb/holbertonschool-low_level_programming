#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - main print all
 * @format: string
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *pformat = format;
	int d;
	char c, *s;
	double f;

	va_start(ap, format);
	/* cief */
	while (*pformat)
	{
		switch (*pformat++)
		{
			case 'c':              /* char */
				c = (char) va_arg(ap, int);
				printf("%c", c);
				break;
			case 's':              /* string */
				s = va_arg(ap, char *);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			case 'i':              /* int */
				d = va_arg(ap, int);
				printf("%d", d);
				break;
			case 'f':              /* float */
				f = va_arg(ap, double);
				printf("%f", f);
				break;
			default:
				continue;
		}
		if (*(pformat))
			printf(", ");
		else
			printf("\n");
	}
	va_end(ap);
}
