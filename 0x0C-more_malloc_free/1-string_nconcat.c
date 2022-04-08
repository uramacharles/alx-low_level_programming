#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *outpt;
	unsigned int counts1, counts2, countoutpt, i, j, k;

	counts1 = counts2 = 0;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		counts1++;

	for (j = 0; s2[j] != '\0'; j++)
		counts2++;

	if (n > counts2)
		n = counts2;

	countoutpt = counts2 + n;

	outpt = malloc(countoutpt + 1);

	if (outpt == NULL)
		return (NULL);

	for (k = 0; k < countoutpt; k++)
		if (k < counts1)
			outpt[k] = s1[k];
		else
			outpt[k] = s2[k - counts1];

	outpt[k] = '\0';

	return (outpt);
}
