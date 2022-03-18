#include "main.h"

/**
* more_numbers - Entry point
* the input
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			j++;
		}
		_putchar('\n');
	}
}
