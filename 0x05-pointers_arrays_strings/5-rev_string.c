#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @x: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *x)
{
	char rev;
	int c, i;

	rev = x[0];
	c = 0;

	while (x[c] != '\0')
		c++;

	for (i = 0; i < c; i++)
	{
		c--;
		rev = x[i];
		x[i] = x[c];
		x[c] = rev;
	}
}
