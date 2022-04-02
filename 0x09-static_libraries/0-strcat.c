#include "main.h"

/**
* *_strcat - Entry point
* @src: the input to add to the other
* @dest: The parent input
* Return: Always 0 (Success)
*/
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	for (y = 0; src[y] != '\0'; y++, x++)
		dest[x] = src[y];
	dest[x] = '\0';
	return (dest);
}
