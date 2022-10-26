#include "main.h"

/**
* puts2 - prints one char out of 2 of  string
* @str: inputs strings
* Return: no return
*/

void puts2(char *str)
{

	int count = 0;

	for (; str[count] != '\0'; count++)
{
	if ((count % 2) == '\0')
	_putchar(str[count]);

	else
		continue;
}
	_putchar('\n');
}
