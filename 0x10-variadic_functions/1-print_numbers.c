#include "variadic_functions.h"

/**
 * print_numbers - a function that print number
 *@separator: number of parameter
 *@...:the integer to sum
 *@n: the number of argument
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
		while (i--)
			printf("%d%s", va_arg(ap, int),
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
