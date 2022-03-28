#include "main.h"
/**
  *_strstr - locates a substring.
  *finds first occurence of the substring needle in
  *haystack.
  *@haystack: pointer to string.
  *@needle: pointer to substring.
  *
  *Return: pointer to beginning of located string
  *or NULL if substring isnt located.
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, check;
	char *start, *ndl;

	j = 0;
	for (i = 0; needle[i]; i++)
		j++;
	while (*haystack)
	{
		start = haystack;
		ndl = needle;

		while (*ndl && *haystack && *haystack == *ndl)
		{
			k++;
			haystack++;
			ndl++;
			if (k == j)
			{
				check = 1;
				break;
			}
		}
		if (check == 1)
		{
			return (start);
		}
		if (!*ndl)
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (0);
}
