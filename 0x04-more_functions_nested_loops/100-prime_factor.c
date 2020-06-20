#include <stdio.h>
/**
 *main - print prime numbers
 *Return: 0.
 */
int main(void)
{
	long int i, prime;

	long int n = 612852475143;

	for ((i = n / 2); i <= n; i--)
	{
		prime = n % i;

		if (prime == 0 && i <= n)
		{
			printf("%ld \n", i);
			break;
		}
	}
	return (0);
}
