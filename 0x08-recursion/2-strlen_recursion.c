#include "main.h"
/**
  *_strlen_recursion - returns lenght of a string.
  *@str: pointer to string.
  *
  *Return: lenght of string.
  */
int _strlen_recursion(char *str)
{
	if (*str)
	{
		return (1 + _strlen_recursion(str + 1));
	}
	else
	{
		return (0);
	}
}
