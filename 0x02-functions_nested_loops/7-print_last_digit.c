#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_last_digit - Entry point
*
* Return: Always the value of r (Success)
*/
int print_last_digit(int x)
{
	int r;

	if (x >= 10)
		r = x % 10;
	else
		r = x;
	return (r);
}
