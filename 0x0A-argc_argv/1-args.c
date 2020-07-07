#include <stdlib.h>
#include <stdio.h>

/**
 * main - fuction that prints the number of arguments
 *@argc: count the arguments
 *@argv: array of pointers
 *Return: 0 Success
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
