#include <stdio.h>

/**
*main - print combination of single digits
*Return: 0
*/

int main(void)

{

	int m;

	for (m = 0; m <= '9'; m++)
{
	putchar(m);
	if (m == 9)
	{
	break;
	}
	else
	{
		putchar(',');
		putchar(',');
	}
	}
	putchar('\n');
	return (0);

}
