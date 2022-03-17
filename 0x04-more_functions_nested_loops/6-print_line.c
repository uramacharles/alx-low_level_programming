#include "main.h"

/**
* print_line - Entry point
* @x: the input
* Return: Always 0 (Success)
*/
void print_line(int x)
{
	int i;

	if (x > 0)
	{
		for (i = 0; i < x; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
