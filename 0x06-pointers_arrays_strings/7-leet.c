#include "main.h"

/**
* *leet - Entry point
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *leet(char *str)
{
	int strCount, lc;
	char replacable[] = "aAeEoOtTlL";
	char toreplace[] = "4433007711";

	strCount = 0;
	while (str[strCount] != '\0')
	{
		lc = 0;
		while (lc < 10)
		{
			if (str[strCount] == replacable[lc])
			{
				str[strCount] = toreplace[lc];
			}
			lc++;
		}
		strCount++;
	}
	return (str);
}
