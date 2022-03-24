#include "main.h"

/**
 *print_number - prints an integer.
 *only using the putchar function.
 *noarrays and pointers.
 *@x: integer to be printed.
 *
 *Return: void.
 */
void print_number(int x)
{
	unsigned int num;

	num = x;
	/*Validate the negative prints*/
	if (x < 0)
	{
		_putchar(45);
		num = -x;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
