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
	int z;

	for (x = '0'; x < '8'; x++)
	{
		for (y = x + 1; y < '9'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x == '7' && y == '8' && z == '9')
				{
					continue;
				}
				else if (x <= '7' && y <= '8' && z <= '9')
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
	}
	putchar('\n');
	return (0);
}
