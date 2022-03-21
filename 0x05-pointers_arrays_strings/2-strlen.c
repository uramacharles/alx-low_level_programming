#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @x: char input
 * Return: length of the input string
 */
int _strlen(char *x)
{
	int i;
	int sum;
	char p;

	i = 1;
	lng = 0;
	p = x[0];

	while (p != '\0')
	{
		lng++;
		p = x[i++];
	}
	return (lng);
}
