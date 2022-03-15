#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _islower - Entry point
*
* parameter: x - the value to be checked
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
