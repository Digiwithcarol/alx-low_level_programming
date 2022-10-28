#include "main.h"

/**
* main - writes a function that prints the last digit of a number
* @n: the passed args
* Return: Always 0
*/

int print_last_digit(int n)
{
	int xoo = n % 10;

	if (xoo < 0)
		xoo *= -1;

	_putchar(xoo + '0');

	return (xoo);
}

