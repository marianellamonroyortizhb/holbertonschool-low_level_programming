#include <stdio.h>
/**
* main - Start
* Return: Always 0
*/
int main(void)
{
	int n = 0x16;

	for (n = '0'; n <= 'F'; ++n)
	{
	if (n <= '9' || n >= 'A')
	{
	putchar(n);
	}
	}
	putchar('\n');
	return (0);
}

