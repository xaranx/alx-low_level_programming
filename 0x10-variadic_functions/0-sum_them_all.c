#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *@n: number of parameter
 *@...:the integer to sum
 * Return: integer sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;

	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
