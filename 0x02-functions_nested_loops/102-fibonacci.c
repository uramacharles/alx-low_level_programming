#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints the first 50 fib numbers, starting with 1 and 2
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	long int a, b, c, _next;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else{
			printf("%ld\n", b);
		}
		_next = b + c;
		b = c;
		c = _next;
	}
return (0);
}
