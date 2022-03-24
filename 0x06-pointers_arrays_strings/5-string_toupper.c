#include "main.h"

/**
* string_toupper - Entry point
* @str: the input
* Return: Returns the upper case of the string
*/
char *string_toupper(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
