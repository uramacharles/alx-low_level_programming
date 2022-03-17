#include "main.h"

/**
* main - Entry point
* @x: the input
* Return: Always 0 (Success)
*/
void print_number(int x)
{
	int i, y;

	y = abs(x);

	if (x >= 0 && x < 9)
	{
		_putchar('0', + x);
		_putchar('\n');
	}
	else if (x < 0)
	{
		_putchar('-');
		do{
			putchar('0',(x % 10));
		}
		while();
	}
}
