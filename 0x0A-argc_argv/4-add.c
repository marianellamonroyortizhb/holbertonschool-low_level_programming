#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - fuction that prints all the arguments
 *@argc: count the arguments
 *@argv: array of pointers
 *Return: 0 or 1 Success / Error
 */

int main(int argc, char *argv[])
{
	int result, i, j;

	i = 0;
	j = 0;
	result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}

			}

			result = result + atoi(argv[i]);
		}
	}

	else
	{
		printf("0\n");
		return (0);
	}

	printf("%i\n", result);
	return (0);

}
