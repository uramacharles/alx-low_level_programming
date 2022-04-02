#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @count: number of command line arguments.
 * @argum: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int count, char *argum[])
{
	int cents, ncoins = 0;

	if (count == 1 || count > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argum[1] < 0)
	{
		putchar('0');
		return (0);
	}

	cents = atoi(argum[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		ncoins += 1;
	}
	printf("%d\n", ncoins);
	return (0);
}
