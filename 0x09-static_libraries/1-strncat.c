#include "main.h"

/**
* _strncat - Entry point
* @dest: the input
* @src: the data to add
* @n: the number of characters in src to consider
* Return: Always 0 (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	for (y = 0; y < n && src[y] != '\0'; y++, x++)
		dest[x] = src[y];
	dest[x] = '\0';
	return (dest);
}
