#include "main.h"

/**
* main - Entry point
* @x: the input
* Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar('0' + i);
	}
	_putchar('\n');
}
