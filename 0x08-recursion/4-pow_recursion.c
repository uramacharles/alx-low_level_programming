#include "main.h"
/**
  *_pow_recursion - returns the value of x to the power of y.
  *@num: number.
  *@pow: power.
  *
  *Return: num to the pow of pow.
  * -1 if num < 0.
  */
int _pow_recursion(int num, int pow)
{
	if (pow < 0)
		return (-1);
	if (pow == 0)
		return (1);
	if (pow == 1)
		return (num);
	return (num * _pow_recursion(num, pow - 1));
}
