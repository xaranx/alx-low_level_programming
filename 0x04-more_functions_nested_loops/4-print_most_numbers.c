#include "main.h"

/**
 *print_most_numbers - function that prints
 *the numbers, from 0 to 9 except 2 and 4
 * Return: o to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		n++;
	}
}
