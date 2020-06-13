#include <stdio.h>
/**
* main - Start
* Return: Always 0
*/
int main(void)
{
	int u, d;

	for (d = '0'; d <= '8'; ++d)
	{
		for (u = '0'; u <= '9';	++u)
		{
			if (u == '0' && d == '0')
			{
				continue;
			}
			putchar(d);
			putchar(u);
				if (u == '9' && d == '8')
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

