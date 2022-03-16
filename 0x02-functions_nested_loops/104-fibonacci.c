#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long int a, b, c, b1, b2, b3, b4;

	b = 1;
	c = 2;
	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}
	b1 = b / 1000000000;
	b2 = b % 1000000000;
	b3 = c / 1000000000;
	b4 = c % 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", b3 + (b4 / 1000000000));
		printf("%lu", b4 % 1000000000);
		b3 += b1;
		b1 = b3 - b1;
		b4 += b2;
		b2 = b4 - b2;
	}
	printf("\n");
	return (0);
}
