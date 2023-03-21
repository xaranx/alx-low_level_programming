#include "main.h"

/**
 * _islower -  check if the input number is lowercase
 * will print 1 otherwise print 0
 *
 * @c: the Char in ASCII code
 *
 * Return: Always 0 or 1.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
	return (0);
}
