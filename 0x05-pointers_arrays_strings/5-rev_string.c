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
	final = 0;

	while (s[i] != '\0')
        {
                i++;
        }

	i = final;

	while (initial < final)
	{
		aux = s[final];
		s[final] = s[initial];
		s[initial] = aux;
		s[i] = s[initial];
		initial++;
		final--;
	}
}
