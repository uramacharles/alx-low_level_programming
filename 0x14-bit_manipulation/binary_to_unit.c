#include "main.h"
#include "stdio.h"

/**
* binary_to_uint - This is the function that converts binary to int base 10
* @b: the input
* Return: int (Success)
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int baseTen = 0;
	int count, red, base_form;

	if (!b)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
		;
	for (red = count--,base_form = 1 ; red > 0; red--, base_form *= 2)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}
		if (b[count] & 1)
		{
			baseTen += base_form;
		}
	}
	return (baseTen);
}
