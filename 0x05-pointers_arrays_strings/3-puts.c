#include "main.h"

/**
 * _puts - a function that prints a string
 * @x: string input
 * Return: string
 */
void _puts(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
}
