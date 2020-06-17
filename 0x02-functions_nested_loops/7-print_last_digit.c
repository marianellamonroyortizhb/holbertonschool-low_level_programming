#include "holberton.h"
/**
 *print_last_digit - Prints the last digit of a integer
 *Return: Last digit of a integer
 *@n: integer to examinate
 */

int print_last_digit(int n)
{
	int n1;

	n1 = n % 10;

	if (n > 0)
	{
		_putchar('0' + n1);
		return (n1);
	}
	else if (n < 0)
	{
		_putchar('0' - n1);
		return (-n1);
	}
	else
	{
		_putchar('0' + n1);
		return (0);
	}
}
