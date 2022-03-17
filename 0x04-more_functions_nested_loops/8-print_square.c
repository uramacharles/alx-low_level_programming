#include "main.h"
/**
* print_square - Entry point
* @x: the input
* Return: Always 0 (Success)
*/
void print_square(int x)
{
	int i, j;

	if (x > 0)
	{
		for (i = 0; i < x; i++)
		{
			j = 0;
			while (j < x)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
