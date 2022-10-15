#include <stdio.h>

/**
*main - Print in reverse
*Return: 0
*/

int main(void)
{

	char re;

	for (re = 'z'; re >= 'a'; re--)
	putchar(re);

	putchar('\n');

	return (0);
}
