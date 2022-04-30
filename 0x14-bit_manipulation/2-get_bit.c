#include "main.h"
#include "stdio.h"
/**
 * get_bit - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 * @index: The index of the number to return
 * Return: no return.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n > 0 && index <= 63)
	{
		while (i < index)
		{
			if (i == index)
			{
				break;
			}
			n >>= 1;
			i++;
		}
		return (n & 1);
	}
	else if (n == 0 && index <= 63)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
