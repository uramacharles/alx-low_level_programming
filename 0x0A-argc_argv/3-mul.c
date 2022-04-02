#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @count: number of command line arguments.
 * @argum: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int count, char *argum[])
{
	if (count != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argum[1]) * atoi(argum[2]));
	return (0);
}
