#include <stdio.h>
#include <stdlib.h>
/**
 * main - fuction that prints all the arguments
 *@argc: count the arguments
 *@argv: array of pointers
 *Return: 0 or 1 Success / Error
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	return (0);
	}
}
