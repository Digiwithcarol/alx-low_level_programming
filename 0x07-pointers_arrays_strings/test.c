#include <stdio.h>

/**
 * This is a trial pointer 
 * i want to see the money
 * */

int main(void)
{
	int a = 50;
	int *p;

	p = &a;

	printf("value of a:%d\n", a);
	printf("address of a:%p\n", p);

	return (0);
}
