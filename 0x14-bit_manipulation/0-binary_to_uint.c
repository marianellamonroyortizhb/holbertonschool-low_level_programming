#include "holberton.h"
/**
 * binary_to_uint - DESC
 * @b: ?
 * Return: ALWAYS
 */
unsigned int binary_to_uint(const char *b)
{
/*	unsigned int base = 2; */
	unsigned int len_b = 0;
	unsigned int count = 0;
	unsigned int uns_int = 0;

	len_b = strlen(b);
	if (b == NULL)
	{
		return (0);
	}
	for (count = len_b; count > 0; count--)
	{
		if (b[count] != 0 || b[count] != 1)
		{
			return (0);
		}
		else if (b[count] == '1')
		{
			uns_int << 1; 
			uns_int = uns_int + b[count] - '0';
		}
		return (uns_int);
	}
	return (0);
}
