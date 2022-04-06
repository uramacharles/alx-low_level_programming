#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: string to add to end of of first string
 *
 * Return: pointer to newly allocated string concatenation
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int count1 = 0, count2 = 0;
	char *ptr, *ret;

	ptr = s1;
	if (s1)
		while (*ptr++)
			count1++;
	else
		s1 = "";

	ptr = s2;
	if (s2)
		while (*ptr++)
			count2++;
	else
		s2 = "";

	ret = malloc(count1 + count2 + 1);
	if (ret)
	{
		ptr = ret;
		while (*s1)
			*ptr++ = *s1++;
		while (*s2)
			*ptr++ = *s2++;
		*ptr = 0;

		return (ret);
	}
	else
		return (NULL);
}
