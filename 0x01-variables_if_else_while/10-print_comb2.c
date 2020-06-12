#include <stdio.h>
/**
* main - Start
* Return: Always 0
*/
int main(void)
{
	int u, d;

	for (d = '0'; d <= '9'; ++d)
	{
		for (u = '0'; u <= '9';	++u)
		{
			putchar(d);
			putchar(u);
		if (u == '9' && d == '9')
		{
		continue;
		}
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

