#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@acount: argument count.
  *@aval: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int acount, char **aval)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (acount == 0 || aval == NULL)
		return (NULL);

	for (i = 0; i < acount; i++)
	{
		for (j = 0; aval[i][j]; j++)
			len++;
	}
	len += acount;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < acount; i++)
	{
		for (j = 0; aval[i][j]; j++)
		{
			str[k] = aval[i][j];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
