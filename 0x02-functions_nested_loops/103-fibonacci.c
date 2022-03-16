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
	int a;
	unsigned long int b, c, _next, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum += b;
		}
		_next = b + c;
		b = c;
		c = _next;
	}
	printf("%lu\n", sum);
	return (0);
}
