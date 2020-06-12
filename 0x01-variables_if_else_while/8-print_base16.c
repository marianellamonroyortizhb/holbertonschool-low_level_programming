#include <stdio.h>
/**
* main - Start
* Return: Always 0
*/
int main(void)
{
	int n = 0x16;

	for (n = '0'; n <= 'f'; ++n)
	{
	if (n <= '9' || n >= 'a')
	{
	putchar(n);
	}
	}
	putchar('\n');
	return (0);
}

