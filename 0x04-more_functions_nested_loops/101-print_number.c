#include <stdlib.h>
#include "main.h"

/**
* print_number - Entry point
* @x: the input
* Return: Always 0 (Success)
*/
void print_number(int x)
{
	int n;

	n = x;
	if (x < 0)
	{
		_putchar(45);
		n = -x;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar('0' + (n % 10));
}
