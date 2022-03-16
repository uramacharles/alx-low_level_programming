#include "main.h"

/**
* print_times_table - Entry point
* @x: number to work with
* Return: Always 0 (Success)
*/
void print_times_table(int x)
{
	int i, j, c;

	if ((x >= 0) && (x <= 15))
	{
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j <= n; j++)
			{
				c = j * i;
				if (j == 0)
					_putchar(c + '0');
				else if (c < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c >= 10 && c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
