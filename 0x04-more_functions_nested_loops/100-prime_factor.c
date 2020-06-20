#include <stdio.h>
/**
 *main - print prime numbers
 *Return: i success
 */
int main(void)
{
	long int i, prime;

	long int n = 612852475143;

	for ((i = n); i <= n; i--)
	{
		prime = n % i;

		if (prime == 0 && i <= n)
		{
			printf("%ld", i);
			printf("\n");
			break;
		}
	}
	return (i);
}
