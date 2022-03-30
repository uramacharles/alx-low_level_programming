#include "main.h"
/**
  *validator - Square root validation
  *_sqrt_recursion - this calls the second function
  *@num: number.
  *@pSqrt: poissible sqrt of number.
  *
  *Return: sqrt of number ot -1 for error.
  */
int validator(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (validator(num, pSqrt + 1));

	}
}

/**
  *_sqrt_recursion - returns the natural square root of a number.
  *@num: number to find sqrt of.
  *
  *Return: squareroot of num.
  *-1 if num does not have a natural sqrt.
  */
int _sqrt_recursion(int num)
{
	if (num < 0)
		return (-1);
	else
		return (validator(num, 0));
}
