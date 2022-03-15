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
		putchar(i);
		if (i < 98)
		{
			putchar(',');
			putchar(' ');
		}
		else{
			putchar('\n');
		}
	}
}
