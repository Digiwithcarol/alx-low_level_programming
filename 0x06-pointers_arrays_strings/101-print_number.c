#include "main.h"

/**
* print_number - this prints an integer
* @n: input integer
* Return: void
*/

void print_number(int n)
{
	unsigned int m, d, tak;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}

	else
	{
		m = n;
	}

	d = m;
	tak = 1;

	while (d > 9)
	{
		d /= 10;
		tak *= 10;
	}
	for (; tak >= 1; tak /= 10)
	{
		_putchar(((m / tak) % 10) + 48);
	}
}
