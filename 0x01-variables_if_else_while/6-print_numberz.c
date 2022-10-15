#include <stdio.h>

/**
*main - a program that prints single digits with a new line
*Return: 0
*/


int main(void)
{
	int x;

	for (x = 0; x < 10; x++)

	putchar((x % 10) + '0');

	putchar('\n');
	return (0);
}
