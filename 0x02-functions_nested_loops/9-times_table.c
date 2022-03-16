#include "main.h"

/**
* times_table - Entry point
*
* Return: Always void
*/
void times_table(void)
{
	int i;
	int j;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			c = i * j;
			if (j == 0)
			{
				_putchar('0' + 0);
			}
			if (c < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + c);
			}
			if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
			}
		}
		_putchar('\n');
	}
}
