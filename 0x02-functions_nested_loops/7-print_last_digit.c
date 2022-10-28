#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: the number in question
*
* Return: Value of the last digit
*/
int print_last_digit(int n)
{
	int cod = n % 10;

	if (cod < 0)
		cod *= -1;

	_putchar(cod + '0');

	return (cod);
}
