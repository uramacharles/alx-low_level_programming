#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
		return -n;
	else
		return n;
}
