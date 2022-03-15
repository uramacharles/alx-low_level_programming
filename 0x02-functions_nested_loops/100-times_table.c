#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_times_table - Entry point
*
* Return: Always 0 (Success)
*/
void print_times_table(int x)
{
	if ((x >= 0) || (x <= 15))
	{
		int i;
		int j;
		int c;
		for (i = 0; i < 10; i++)
		{
			_putchar(0);
			_putchar(',');
			_putchar(' ');
			for (j = 0; j < 10; j += j)
			{
				c += i;
				_putchar(c);
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
