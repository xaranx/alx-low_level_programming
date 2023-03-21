#include "main.h"

/**
*main - _putchar - writes the character c to stdout
*Return: Always 0 (Success)
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
