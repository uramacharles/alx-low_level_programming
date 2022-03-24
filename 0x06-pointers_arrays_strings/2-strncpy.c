#include "main.h"

/**
* _strncpy - Entry point
* @dest: the destination
* @src: the text to copy
* @n: the number of space allocation to copy
* Return: Always 0 (Success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && *(src + i); i++)
		*(dest + i) = *(src + i);
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
