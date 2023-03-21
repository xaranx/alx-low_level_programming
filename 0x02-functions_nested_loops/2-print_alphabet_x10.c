#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet
* * Retun - void
*/

void print_alphabet_x10(void)
{
	int i, j;

	i = 0;

	while (i <= 9)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		i++;
		j = 97;
		_putchar('\n');
	}
}
