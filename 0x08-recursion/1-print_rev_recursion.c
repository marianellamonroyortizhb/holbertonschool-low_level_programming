#include "holberton.h"

/**
 *_print_rev_recursion - Prints that reverse a strign
 *
 *@s: Strign to evaluate
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

	else
	{
		return;
	}
}
