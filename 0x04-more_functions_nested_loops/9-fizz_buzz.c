#include <stdio.h>
/**
 *main - print numbers 1-100 and add FizzBuzz
 *Return: 0.
 */
int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (i == 1)
		{
			printf("%d", i);
		}
		else if (i == 100)
		{
			printf(" Buzz");
			putchar('\n');
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	return (0);
}
