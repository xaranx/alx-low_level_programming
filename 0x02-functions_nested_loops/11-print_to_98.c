#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: integer input
 * Return: n to 98
 */

void print_to_98(int n)
{
	if (n < 0)
	{		
		while (n <= 98)
		{
			if(n < 0)
			{
				_putchar('-');
				_putchar((n * -1) / 10 + '0');
				_putchar((n * -1) % 10 + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
			n++;
		}
		_putchar('\n');
	}
	else if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		
			n++;
		}
		_putchar('\n');
	}



	else if (n >= 98)
	{
		while (n >= 98)
		{
			_putchar(n / 100 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
			n--;
		}
		_putchar('\n');
	}
}
