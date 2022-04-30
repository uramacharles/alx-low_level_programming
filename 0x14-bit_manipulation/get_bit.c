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

	while (i < index)
	{
		if (i == index)
		{
			printf("%d \n", index);
			return (n & 1);
		}
		n >>= 1;
		i++;
	}
	return (n & 1);
}
