#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* the input
* Return: Always 0 (Success)
*/
int main(void)
{
	long int x, y, prime;

	prime = -1;
	x = 612852475143;

	while (x % 2 == 0)
	{
		prime = 2;
		x = x / 2;
	}
	for (y = 3; y <= x / 2; y += 2)
	{
		while (x % y == 0)
		{
			prime = y;
			x = x / y;
		}
	}
	if (x > 2)
		prime = x;

	printf("%ld\n", prime);
	return (0);
}
