#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/**
* main - Start
* Return: Always 0
*/
int main(void)
{
	int n, LDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LDig = n % 10;
	if (LDig > 5)
	{
	printf("Last digit of %d is LDig(n) and is greater than 5\n", n);
	}
	if (LDig == 0)
	{
	printf("Last digit of %d is LDig(n) and is 0\n", n);
	}
	if (LDig < 6 && LDig != 0)
	{
	printf("Last digit of %d is lDig(n) and is greater than 5\n", n);
	}
	return (0);
}

