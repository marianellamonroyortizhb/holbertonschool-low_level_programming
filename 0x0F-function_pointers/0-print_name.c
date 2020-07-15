#include <stdio.h>

/**
 * print_name - function that prints a name.
 *
 * @name: string with the name.
 * @f: pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (*name && *f)
		f(name);
}
