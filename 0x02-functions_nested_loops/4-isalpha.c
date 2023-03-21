#include "main.h"

/**
 * _isalpha -  check if the input number is lowercase
 * will print 1 otherwise print 0
 *
 * @c: the Char in ASCII code
 *
 * Return: Always 0 or 1.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
	_putchar('\n');
}
