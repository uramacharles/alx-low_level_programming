#include "main.h"

/**
 * _strspn - gets lengthof a prefix substring. ends when a foreign character is seen.
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cnt;

	cnt = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				cnt++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (i);
}
