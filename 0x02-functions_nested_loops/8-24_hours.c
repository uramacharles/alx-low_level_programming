#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* jack_bauer - Entry point
*
* Return: Always 0 (Success)
*/
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
			if (i == 2 && j == 3)
				break;
		}
	}
}
