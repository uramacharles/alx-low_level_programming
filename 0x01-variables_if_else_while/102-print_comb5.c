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
	int p;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y < '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				for (p = '0'; p <= '9'; p++)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(p);
					if (x == '9' && y == '8' && z == '9' && p == '9')
					{
						continue;
					}
					else if (x <= '9' && y <= '8' && z <= '9' && p <= '9')
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
	}
	putchar('\n');
	return (0);
}
