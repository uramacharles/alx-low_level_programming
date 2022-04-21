#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list items;
	unsigned int i;
	int cumulative = 0;

	if (n == 0)
		return (0);

	va_start(items, n);

	for (i = 0; i < n; i++)
		cumulative += va_arg(items, int);

	va_end(items);

	return (cumulative);
}
