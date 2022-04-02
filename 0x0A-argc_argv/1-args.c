#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @count: number of command line arguments.
 * @argum: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int count, char *argum[] __attribute__((unused)))
{
	printf("%d\n", count - 1);
	return (0);
}
