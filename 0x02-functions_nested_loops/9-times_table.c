#include <stdio.h>
#include "main.h"

/**
* times_table - Entry point
*
* Return: Always 0 (Success)
*/
void times_table(void)
{
	int i;
	int j;
	int c;

	for (i = 0; i < 10; i++)
	{
		c = 0;
		for (j = 0; j < 10; j++)
		{
			c += i;
			if (j == 0)
			{
				_putchar('0' + 0);
				_putchar(',');
				_putchar(' ');
			}
			if (c < 10)
			{
				_putchar('0' + c);
				_putchar(',');
				_putchar(' ');
			}
			if (c >= 10)
			{
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
