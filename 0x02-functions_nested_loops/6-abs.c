#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _abs - Entry point
*
*@n: this is the number to make absolute
* Return: Always absolute number
*/
int _abs(int n)
{
	if (n < 0)
		return -n;
	else
		return n;
}
