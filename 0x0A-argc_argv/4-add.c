#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @count: number of command line arguments.
 * @argum: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int count, char *argum[])
{
	int i, j, add = 0;

	for (i = 1; i < count; i++)
	{
		for (j = 0; argum[i][j] != '\0'; j++)
		{
			if (!isdigit(argum[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argum[i]);
	}
	printf("%d\n", add);
	return (0);
}
