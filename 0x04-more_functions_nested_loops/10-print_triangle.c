#include "main.h"

/**
* main - Entry point
* @x: the input
* Return: Always 0 (Success)
*/
void print_triangle(int x)
{
	int i, j, p;

	if (x > 0)
	{
		for (i = 0; i < x; i++)
		{
			p = 0;
			j = x - i;
			while (j > 1)
			{
				_putchar(' ');
				j--;
			}
			while (p <= i)
			{
				_putchar('#');
				p++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
