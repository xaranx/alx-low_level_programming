#include "main.h"

/**
 * _abs -  check the absolute value of an integer
 * will print 1 otherwise print 0
 *
 * @n: number input
 *
 * Return: Always 0 or 1.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}
