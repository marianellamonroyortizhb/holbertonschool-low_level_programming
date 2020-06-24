#include "holberton.h"
/**
 *rev_string - Print a string in reverse
 *
 *@s: Strign to evaluate
 *Return: 0 Success;
 */

void rev_string(char *s)
{
	int i, initial, final;
	char aux[1000];

	i = 0;
	initial = 0;
	final = 0;

	while (s[i + 1] != '\0')
	{
		i++;
	}

	final = i;

	while (i >= 0)
	{
		aux[initial] = s[i];
		i--;
		initial++;
	}
	i = 0;
	while (i <= final)
	{
		s[i] = aux[i];
		i++;
	}
}
