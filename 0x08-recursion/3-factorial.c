#include "main.h"
/**
  *factorial - returns factorial of a given number.
  *@a: number to find  factorial of.
  *
  *Return: factorial of number
  *-1 if a <0 .
  */
int factorial(int a)
{
	if (a < 0)
		return (-1);
	if (a == 0 || a == 1)
		return (1);
	return (a * factorial(a - 1));
}
