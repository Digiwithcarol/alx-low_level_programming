#include "main.h"

/**
* largest_number - returns the largest number
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
 */

int largest_number(int a, int b, int c)

{

	int largest;



	if (a > b && b > c)
{

		largest = a;
}
	else if (a > c)
{
		largest = a;
}
	else
{
		largest = c;
}
	if (b < c)
{
		largest = c;
}
	else
{
		largest = b;
}
	return (largest);
}
