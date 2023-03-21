#include "main.h"

/**
* print_alphabet -  using putchar dunction - prototype methide
* Return: void
*/

void print_alphabet(void)
{
	int n;

	n = 97;
	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
