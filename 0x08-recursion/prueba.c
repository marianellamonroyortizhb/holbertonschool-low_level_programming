#include <stdio.h>
/**
 *main - print prime numbers
 *Return: 0 success
 */
int main(void)
{
	int i, prime, j;

	int n = 17;

	j = 0;

	for (i = 1; i <= n; i++)
        {
                prime = n % i;

                if (prime == 0)
                {
/*			printf("%d", i);
			printf("\n");   */
			j++;
/*			printf("%d", j);
			printf("\n"); */
		}
        }
	printf("%d", j);
	printf("\n");
        return (0);
}
