#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 *@c: the number to be checked
 * Return: 1 if upper letter or 0 if any else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
