#include "main.h"

/**
 * print_triangle - a function that checks for uppercase character
 *@size: the high of the triangle
 * Return: return triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size == 0)
		_putchar('\n');
	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			if (j <= size - i)
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
}
