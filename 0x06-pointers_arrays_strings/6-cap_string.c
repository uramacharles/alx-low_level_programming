#include "main.h"

/**
 *cap_string - converts all the first later of a string to capital later
 *separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *@str: the string to work on.
 *
 *Return: Returns the pointer to the string.
 */
char *cap_string(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		if (str[x] == ' ' || str[x] == '\t' || str[x] == '\n'
		    || str[x] == ',' || str[x] == ';' || str[x] == '.'
		    || str[x] == '.' || str[x] == '!' || str[x] == '?'
		    || str[x] == '"' || str[x] == '(' || str[x] == ')'
		    || str[x] == '{' || str[x] == '}')
		{
			if (str[x + 1] >= 97 && str[x + 1] <= 122)
			{
				str[x + 1] = str[x + 1] - 32;
			}
		}
		x++;
	}
	return (str);
}
