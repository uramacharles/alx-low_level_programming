#include "main.h"

/**
* main - Entry point
* @x: the input
* Return: Always 0 (Success)
*/
void print_diagonal(int x)
{
	int i, j;

	if (x > 0)
	{
		for (i = 0; i < x; i++)
		{
			j = 0;
			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
