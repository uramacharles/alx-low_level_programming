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
		_putchar('0' + 0);
		_putchar(',');
		_putchar(' ');
		for (j = 0; j < 10; j++)
		{
			c += i;
			_putchar('0' + c);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
