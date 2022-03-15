#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _isalpha - this prints all the alphabets.
*
* Return: Always 0 (Success)
*/
int _isalpha(int x)
{
	if ((x >= 97 && x < 123) || (x >= 65 && x < 91))
		return (1);
	else
		return (0);
}
