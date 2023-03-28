#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * *@str: the number to be checked
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= 5)
			_putchar(str[i]);
	}
	_putchar('\n');
}
