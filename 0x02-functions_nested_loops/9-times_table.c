#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point
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
