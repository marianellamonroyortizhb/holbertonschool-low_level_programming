#include <stdlib.h>
#include <time.h>
/**
* main - Start
* Return: Always 0
*/
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10;
	if (LastDigit > 5)
	{	
	printf("Last digit of %d is and is greater than 5\n", n, LastDigit); 
	}	
	
	return (0);
}
