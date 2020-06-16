#include "holberton.h"
/**
 *main - Prints Holberton
 *Return: 0 Success
 *
 */

int main(void)
{
	int i;

	char array[] = "Holberton";

	for (i = 0; i <= 8; i++)
	{
		_putchar(array[i]);
	}
	return (0);
}
