#include <stdio.h>

/**
*main - Upper case and lower case
*Return: 0
*/

int main(void)
{
	char lu;

	for (lu = 'a'; lu <= 'z'; lu++)
		putchar(lu);

	for (lu = 'A'; lu <= 'z'; lu++)
		putchar(lu);

	putchar('\n');

	return (0);
}
