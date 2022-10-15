#include <stdio.h>

/**
*main - prints only lowercase without q and e with a new line
*Return: 0
*/

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
{
	if (lc != 'e' && lc != 'q')
		putchar(lc);
}
	putchar('\n');
	return (0);
}
