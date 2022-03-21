#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array.
 * @x: pointer to an integer
 * @y: number of elements of an array.
 */
void print_array(int *x, int y)
{
	int i;

	for (i = 0; i < y; i++)
	{
		printf("%d", *(x + i));
		if (i == (y - 1))
		{
			break;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
