#include "main.h"

/**
 * print_rev - This function prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @x: str input
 * Return: string in reverse
 */
void print_rev(char *x)
{
	int c = 0;
	int i, y;

	for (i = 0; x[i] != '\0'; i++)
	{
		c++;
	}

	for (y = (c - 1); y >= 0; y--)
	{
		_putchar(x[y]);
	}
	_putchar('\n');
}
