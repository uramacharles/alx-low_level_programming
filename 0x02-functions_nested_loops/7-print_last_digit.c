#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_last_digit - Entry point
* @x: the number to work on.
* Return: Always the value of r (Success)
*/
int print_last_digit(int x)
{
	int r;

	if (x >= 0)
		r = x % 10;
	else
		r = (x % 10) * -1;
	_putchar('0' + r);
	return (r);
}
