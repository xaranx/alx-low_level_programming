#include "main.h"

/**
 * print_square - function print square
 *@size: the number of # to be printed
 * Return: square
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	j = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
	}
}
