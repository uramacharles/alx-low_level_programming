#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int _islower(int x)
{
	if (x >= 97 && x < 123)
		return (1);
	else
		return (0);
}
