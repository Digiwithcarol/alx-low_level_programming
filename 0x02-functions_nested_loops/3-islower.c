#include "main.h"

/**
* _islower - a Function that checks for lower cases
* @c: the character to be checked
* Return: Always 0
*/

int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
	return (1);
	else
	return (c);
}
