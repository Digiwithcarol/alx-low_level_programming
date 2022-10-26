#include "main.h"

/**
* puts_half - a function that prints half of a string
* @str: input string
* Return: no return
*/

void puts_half(char *str)
{
	int hs = 0;

	while (*str != '\0')
	{

	hs++;
	str++;
}

	str -= (hs / 2);
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
}

_putchar('\n');

}
