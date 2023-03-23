#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 *@c: the number to be checked
 * Return: 1 if c is degit or 0 if any else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
