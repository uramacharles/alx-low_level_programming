#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates an array of chars and initializes it with
  *a specific char.
  *@size: size of array.
  *@c: char to initialize array with.
  *
  *Return: NULL if it fails or
  *Pointer to array.
  */
char *create_array(unsigned int size, char c)
{
	char *ary;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ary = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (ary == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ary[i] = c;

	return (ary);

}
