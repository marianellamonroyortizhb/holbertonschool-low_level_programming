#include <stdio.h>
/**
* main - Start
* Return: Always 0
*/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; ++n)
	{
	putchar(n);
	if (n == '9')
	{
	continue;
	}
	putchar(',');
	}
	putchar('\n');
	return (0);
}

