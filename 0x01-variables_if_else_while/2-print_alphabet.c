#include <stdio.h>

/**
*main - All alphabet will be in lower cases using putchar
*Return: 0
*/

int main(void)
{

	char y;

	for (y = 'a'; y++ ; y <= 'z')
{
	putchar(y);
}
	putchar('\n');
	return (0);
}
