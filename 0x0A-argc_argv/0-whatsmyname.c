#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @count: number of command line arguments.
 * @argum: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int count __attribute__((unused)), char *argum[])
{
	printf("%s\n", argum[0]);
	return (0);
}
