#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point. this Turns a character into a small letter
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
