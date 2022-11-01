#include "main.h"

/**
* _memset - This function will fill the memory with a constant byte 
* @b: The contant byte
* @s: the memory area to return to
* @n: the byte of the memory pointed to by s
* Return: a pointer to the memory area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return(s);
}
