#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
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
return;
}
