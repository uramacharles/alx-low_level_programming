#include "main.h"
11;rgb:0000/0000/0000
/**
 * _strpbrk - the function
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes of s in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, check;

	check = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				check = 1;
				break;
			}
		}
		if (check == 1)
			break;
	}
	if (check == 1)
		return (s + i);
	else
		return (0);
}
