#include "main.h"

/**
* _isdigit - Entry point
* @x: the input
* Return: Always 0 (Success)
*/
int _isdigit(int x)
{
	if (x >= 48 && x < 58)
		return (1);
	else
		return (0);
}
