#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - This is a print_alphabet function
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int x;

	for(x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return;
}