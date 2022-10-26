#include "main.h"
#include <stdio.h>

/**
*_strpy - copies the string pointed to y src
* including the terninsting null byte, to the 
*buffer pointed to by dest
 * @dest: destination
* src: source
* Return: the pointer to dest 
*/

char *_strcpy(char *dest, char * src)
{
	int count o;

	while(count >= 0)
{
	*(dest + count) = *(src + count);

if (*(src + count) == '\0')
		break;
	count++;
}
	return(dest);
}
	
