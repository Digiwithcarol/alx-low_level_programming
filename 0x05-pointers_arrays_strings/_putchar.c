#include  <unistd.h>

/**
* _putchar - writes the char c to stdout 
* @c: character to be defined 
* Return: 1
*/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
