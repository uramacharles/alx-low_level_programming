#include "main.h"

/**
* _memcpy - The function that copies the memory
* @dest: The destination memory
* @src: The source memory
* @n: The nth value to be considered
* Return: Always 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		dest[cnt] = src[cnt];
	}
	return (dest);
}
