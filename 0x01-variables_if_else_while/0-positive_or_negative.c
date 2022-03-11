#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - Entry point
 * This file is for 0-positive_or_negative.c
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
/* Description - This is the main function*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
