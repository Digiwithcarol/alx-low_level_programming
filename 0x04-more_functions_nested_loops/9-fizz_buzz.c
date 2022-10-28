#include <stdio.h>

/**
* main - print fizzbuzz
* Return: Always 0
*/
int main(void)
{
	int c;

	printf("1");
	for (c = 2; c <= 100; c++)
	{
		printf(" ");
		if (c % 3 == 0)
			printf("Fizz");
		if (c % 5 == 0)
			printf("Buzz");
		if (c % 3 != 0 && c % 5 != 0)
			printf("%d", c);
	}
	printf("\n");
	return (0);
}
