#include "variadic_functions.h"
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_strings(", ", 3, "Jay", " ", "Django");
	print_strings(NULL, 3, "Jay", " ", "Django");
	print_strings(", ", 3, NULL, " ", "Django");
	return (0);
}
