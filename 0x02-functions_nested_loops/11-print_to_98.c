#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_to_98 - Entry point
* @x: this is the number to start with
* Return: Always 0 (Success)
*/
void print_to_98(int x)
{
	int i;
	for (i = x; i <= 98; i++)
	{
		_putchar('0' + i);
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		else{
			_putchar('\n');
		}
	}
}
