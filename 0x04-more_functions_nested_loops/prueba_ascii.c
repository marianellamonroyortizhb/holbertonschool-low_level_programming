#include <stdio.h>
#include "holberton.h"
/**
 *prueba - funcion
 *
 */
int prueba(void)
{
	int i = 2;
	if (i > 0)
	{
	_putchar('0' + i);
	_putchar(i);
	printf(("'0' + %d"),i);
	printf("%d",i);
	}
	else
	{
	return ("A");
	}
}
