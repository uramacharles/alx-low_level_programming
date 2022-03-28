#include "main.h"
/**
  *_memset - fills memory with a constant byte.
  *fills the first c bytes of the memory area pointed
  *to by a with the constant b.
  *@a: pointer to memory area.
  *@b: constant to fill memory with.
  *@c: bytes of the memory area to be filled.
  *
  *Return: pointer to memory area a.
  */
char *_memset(char *a, char b, unsigned int c)
{
	unsigned int cnt;

	for (cnt = 0; cnt < c; cnt++)
	{
		a[cnt] = b;
	}
	return (a);
}
