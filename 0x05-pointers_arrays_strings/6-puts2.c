#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @x: input
 * Return: print
 */
void puts2(char *x)
{
	int i;

	i = 0;

	for (; x[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(x[i]);
		else
			continue;
	}
	_putchar('\n');
}
