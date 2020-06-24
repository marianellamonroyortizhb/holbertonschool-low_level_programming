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
	int aux;

	initial = 0;
	final = initial-1;

	while (s[i] != '\0')
        {
                i++;
        }

	i = initial;

	while (initial < final)
	{
		aux = s[initial];
		s[initial] = s[final];
		s[final] = aux;
		s[i] = s[initial];
		initial++;
		final--;
	}
}
