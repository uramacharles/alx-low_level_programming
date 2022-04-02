#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @count number of command line arguments.
 * @argum array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int count, char *argum[])
{
	int i;

	for (i = 0; i < count; i++)
		printf("%s\n", argum[i]);
	return (0);
}
