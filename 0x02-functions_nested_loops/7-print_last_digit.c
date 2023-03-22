#include "main.h"
/**
 * print_last_digit - function output the last digit
 *
 * @c: the Char in ASCII code
 *
 * Return: the last degit.
 */

int print_last_digit(int c)
{
	int lastd;

	lastd = c % 10;
	if (lastd < 0)
	{
		_putchar(lastd + 48);
		return (-lastd);
	}
	else
	{
		_putchar(lastd + 48);
		return (lastd);
	}

	_putchar('\n');

}
