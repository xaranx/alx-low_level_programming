#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 *
 * Return: 9 times table
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result;

			result = i * j;
			if (result < 10)
			{
				_putchar(32);
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (j == 9)
				break;
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
