#include <stdio.h>
/**
* main - Start
* Return: Always 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
	if (c != 'e' && c != 'q')
	{
	putchar(c);
	}
	else
	{
	}
	}
	putchar('\n');
	return (0);
}

