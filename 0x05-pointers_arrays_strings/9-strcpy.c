#include "main.h"

/**
* _strcpy - copies the string pointed to by src
* @dest: dsetination
* @src: source
* Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int lon = 0;

	while (*(src + lon) != '\0')
	{
		*(dest + lon) = *(src + lon);
		lon++;
	}

	*(dest + lon) = '\0;
	return (dest);
}
