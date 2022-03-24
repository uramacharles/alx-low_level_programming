#include "main.h"

/**
* reverse_array - Reverses the array content
* @a: the input
* @n: the number
* Return: Always 0 (Success)
*/
void reverse_array(int *a, int n)
{
	int buff, x;

	n = n - 1;
	x = 0;
	while (x <= n)
	{
		buff = a[x];
		a[x] = a[n];
		x++;
		a[n] = buff;
		n--;
	}
}
