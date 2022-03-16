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
	int i, j, sumi, sumj, sum;

	sumi = 0;
	sumj = 0;
	sum = 0;

	for (i = 3; i <= 1024; i+=3)
	{
		sumi += i;
	}
	for (j = 5; j <= 1024;j +=5)
	{
		sumj += j;
	}
	sum = sumi + sumj;
	printf("%lu\n", sum);
	return;
}
