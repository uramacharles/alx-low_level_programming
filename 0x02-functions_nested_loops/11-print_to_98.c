#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Entry point
* @x: this is the number to start with
* Return: Always 0 (Success)
*/
void print_to_98(int x)
{
	int i, j;

	if (x > 98)
	{
		for (j = x; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ",j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
	else if (x <= 98)
	{
		for (i = x; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
}
