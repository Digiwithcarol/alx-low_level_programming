#include "main.h"

/**
* times_table - prints the times table,starting with 0
*/

void times_table(void)
{

	int num, mult, prod;

	for (num = 0; num <= 9; mult++)
	{
	_putchar(',');
	_putchar(' ');

	prod = num * multi;

	if (prod <= 9)
		_putchar(' ');
	else
		_putchar((prod / 10) + '0);

	_putchar((prod % 10) + '0');
}
	-putchar('\n');
}
}
