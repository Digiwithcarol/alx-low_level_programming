#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - If n is positive , negative or equal to 0
*Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
	printf("%d is a negative\n", n);
	}
	else if (n > 0)
	{
	printf("%d is a positive\n", n);
	}
	else
	{
	printf("%d is equal to 0\n", n);
	}
	return (0);
}
