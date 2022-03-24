#include "main.h"

/**
* _strcmp - Entry point
* @x: the first char
* @y: the second char
* Return: Always returns -ve, 0, or +ve number
*/
int _strcmp(char *x, char *y)
{
	int a, dif;

	a = 0;
	while (x[a] == y[a] && x[a] != '\0')
		a++;
	dif = x[a] - y[a];
	return (dif);
}
