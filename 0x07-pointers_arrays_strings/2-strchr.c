#include "main.h"

/**
* _strchr - The function that searches for a character and returns the pointer
* @s: the memory to search
* @c: the character to search
* Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			break;
		}
	}
	return (s + i);
}
