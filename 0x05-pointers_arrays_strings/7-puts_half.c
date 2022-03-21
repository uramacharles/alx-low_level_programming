#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @x: input
 * Return: half of input
 */
void puts_half(char *x)
{
	int i, n, lng;

	lng = 0;

	for (i = 0; x[i] != '\0'; i++)
		lng++;

	n = (lng / 2);

	if ((lng % 2) == 1)
		n = ((lng + 1) / 2);

	for (i = n; x[i] != '\0'; i++)
		_putchar(x[i]);
	_putchar('\n');
}
