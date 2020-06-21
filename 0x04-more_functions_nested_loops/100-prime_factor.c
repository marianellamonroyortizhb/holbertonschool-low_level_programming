#include <stdio.h>
/**
 *main - print prime numbers
 *Return: 0 success
 */
int main(void)
{
	long int prime;

	long int n = 612852475143;

	prime = 2;

	while (prime <= n)
	{
		while ((n % prime) == 0)
		{
			n = n / prime;
		}
		prime++;
	}
	printf("%ld", prime - 1);
	printf("\n");
	return (0);
}
