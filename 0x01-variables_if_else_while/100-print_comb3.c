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
	int y;

	for (x = '0'; x < '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
			if (x == '8' && y == '9')
			{
				continue;
			}
			else if (x != '8')
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				continue;
			}
		}
	}
	putchar('\n');
	return (0);
}
