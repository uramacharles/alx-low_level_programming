#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	unsigned long int sumi, sumj, sum;

	sumi = 0;
	sumj = 0;
	sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sumi +=i ;
		}
		else if ((i % 5) == 0)
		{
			sumj += i;
		}
	}
	sum = sumi + sumj;
	printf("%lu\n", sum);
	return (0);
}
