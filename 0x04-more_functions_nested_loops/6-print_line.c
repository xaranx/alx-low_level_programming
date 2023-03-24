#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 *@n: n is how many time _ will printed
 * Return: line
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
}
