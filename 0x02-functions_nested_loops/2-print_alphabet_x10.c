#include "main.h"

/**
* print_alphabet_x10 - a function that prints 10 times the alphabet
* Return: 0
*/

void print_alphabet_x10(void)
{
	int count = 0;
	char taj;

	while (count++ <= 9)
{
	for (taj = 'a'; taj <= 'z'; taj++)
	_putchar(taj);
	_putchar('\n');
}
}
