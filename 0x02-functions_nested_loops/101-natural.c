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
	int j;
	int sumi;
	int sumj;
	int sum;
	sumi, sumj, sum = 0;
	for (i = 3; i <= 1024; i+=3)
	{
		sumi += i;
	}
	for (j = 5; j <= 1024;j +=5)
	{
		sumj += 1;
	}
	sum = sumi + sumj;
	printf(sum);
	printf("\n");
	return;
}
