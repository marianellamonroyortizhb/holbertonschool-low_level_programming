#include "holberton.h"
/**
 *main - Prints Holberton
 *Return: 0 Success
 *
 */

int main(void)
{
	int i;

	char array[] = "Holberton\n";

	for (i = 0; i <= 9; i++)
	{
		_putchar(array[i]);
	}

	return (0);
}

